class Solution {
public:
    string reverseWords(string s) {
        string ans="";
        int n=s.length();
        for(int i=0;i<n;i++){
            string temp="";
            if(s[i]!=' '){
                while(s[i]!=' ' && i<n){
                    temp+=s[i];
                    i++;
                }
                i--;
            }
            if(temp!=" " && temp!="") {
                reverse(temp.begin(),temp.end());
                ans+=temp;
                ans+=" ";
            }
        }
        reverse(ans.begin(), ans.end());
        string result=ans.substr(1, ans.length()-1);
        return result;
    }
};