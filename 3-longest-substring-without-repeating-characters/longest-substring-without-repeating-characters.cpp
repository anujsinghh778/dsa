class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left =0;
        int maxlength=0;
        set<char>st;
        for(int r=0;r<s.size();r++){
            while(st.find(s[r])!=st.end()){
                st.erase(s[left]);
                left++;
            }
            st.insert(s[r]);
            maxlength=max(maxlength,r-left+1);
        }
        return maxlength;
        
    }
};