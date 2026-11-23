class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>mp;
        for(auto c1:s){
            mp[c1]++;
        }
        for(auto c2 : t){
            if(mp.find(c2)==mp.end()){
                return false;
            }
            mp[c2]--;
        }
        for(auto ele : mp){
            if(ele.second!=0){
                return false;
            }
        }
        return true;
    }
};