class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0;int j=-1;
        int ans=0;
        int n=s.size();
        vector<int>m(256,-1);
        while(i<n){
            if(j<m[s[i]]){
                j=m[s[i]];
            }
            m[s[i]]=i;
            ans=max(ans, i-j);
            i++;
        }
        return ans;
    }
};