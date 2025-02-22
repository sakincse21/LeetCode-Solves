class Solution {
public:
    int lengthOfLastWord(string s) {
        int count=0; int ans=0;
        for(int i=0;i<s.length();i++){
            if(s[i]==' '){
                count=0;
            }else count++;

            if(count) ans=count;
        }
        return ans;
    }
};