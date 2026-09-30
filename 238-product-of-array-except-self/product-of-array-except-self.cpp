class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> preffix(nums.size()); 
        int x =1;
        for(int i =1;i<nums.size();i++){
            preffix[0]=1;
            x*=nums[i-1]; 
            preffix[i]=x;
        }
        vector<int> suffix(nums.size()); 
        int y=1;
        for(int i =nums.size()-2;i>=0;i--){
            suffix[nums.size()-1]=1;
            y*=nums[i+1]; 
            suffix[i]=y;
        }
        vector<int> ans(nums.size()); 
        for(int i =0;i<nums.size();i++){
            ans[i]=preffix[i]*suffix[i];
        }
        return ans;


    }
};