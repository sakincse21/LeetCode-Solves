class Solution {
public:
    int maxVowels(string s, int k) {
        int count=0;
        int i=0; int j;
        for(j=0;j<k;j++){
            if(s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u'){
                count++;
            }
        }
        int ans=count;
        while(j<s.length()){
            if(s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u'){
                count++;
            }
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
                count--;
            }
            i++;j++;
            ans=max(ans,count);
        }
        return ans;
    }
};