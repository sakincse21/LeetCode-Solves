class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        
        int len=s1.length();
        int n=s2.length();
        if(n<len) return false;
        
        int k=0; int j; 
        
        vector<int>v1(26); vector<int>v2(26);
        
        for(int i=0;i<len;i++){
            v1[s1[i]-'a']++;
            v2[s2[i]-'a']++;
        }
        if(v1==v2) return true;
        
        for(j=len;j<n;j++){
            v2[s2[j]-'a']++;
            if(v2[s2[k]-'a']>0) v2[s2[k]-'a']--;
            k++;
            if(v1==v2) return true;
        }
        return false;
    }
};