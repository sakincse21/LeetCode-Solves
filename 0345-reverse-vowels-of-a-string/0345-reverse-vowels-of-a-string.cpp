class Solution {
public:
    string reverseVowels(string s) {
        string t="";
        int n=s.length();
        for(int i=0;i<n;i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
                t+=s[i];
            }
        }
        reverse(t.begin(),t.end());
        int j=0;
        for(int i=0;i<n;i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
                s[i]=t[j]; j++;
            }
        }
        return s;
    }
};