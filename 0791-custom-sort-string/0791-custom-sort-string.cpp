class Solution {
public:
    string customSortString(string order, string s) {
        string ans="";
        map<char,int>mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        for(int i=0;i<order.size();i++){
            while(mp[order[i]]){
                ans+=order[i];
                mp[order[i]]--;
            }
        }
        for(int i=0;i<s.size();i++){
            if(mp[s[i]]!=0){
                ans+=s[i];
                mp[s[i]]--;
            }
        }
        return ans;
    }
};