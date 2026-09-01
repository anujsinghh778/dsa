class Solution {
public:
    void reorderList(ListNode* head) {
        //finding the middle of the linkedlist using fast and slow pointers
        ListNode*fast=head;
        ListNode*slow=head;
        while(fast!=NULL&&fast->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
        }
        //reversing from after the slow pointer to last
        ListNode*curr=slow->next;
        ListNode*prev=NULL;
        slow->next=NULL;
        while(curr!=NULL){
            ListNode*next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        //merging both the  lls
        ListNode*first=head;
        ListNode*second=prev;
        while(second!=NULL){
            ListNode*temp1=first->next;
            ListNode*temp2=second->next;
            first->next=second;
            second->next=temp1;
            first=temp1;
            second=temp2;
        }
    }
};