class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.length(); int ans=0; 
        int i=0; int j=0;int maxx=0;
        map<char, int>m;
        while(j<n){
            m[s[j]]++;
            maxx=max(maxx, m[s[j]]);
            if(j-i+1 - maxx>k){
                m[s[i]]--;
                i++;
            }
            ans=max(ans, (j-i+1));
            j++;
        }
        return ans;
    }
};