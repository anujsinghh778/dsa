/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int count=0;
        int y=1;
        ListNode* temp = head;
        while(temp!=NULL){
            temp=temp->next;
            count++;
        }
        int x = count/2+1;
        while(head!=NULL){
            if(y==x||y>x){
                return head;
            }
            head=head->next;
            y++;
        }
        return NULL;
    }
};