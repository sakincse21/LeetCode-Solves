class Solution {
public:
    bool isSubsequence(string s, string t) {
        int lens=s.length(); int lent=t.length();
        int i=0,j=0; int count=0;
        if(lens==0) return true;
        while(i<lens){
            while(j<lent){
                if(s[i]==t[j]){
                    count++; j++;
                    break;
                }
                j++;
            }
            i++;
        }
        if(count==lens) return true;
        return false;
    }
};