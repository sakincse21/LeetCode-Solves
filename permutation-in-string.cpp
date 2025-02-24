class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int i=0; int j=0; int n=s2.length();
        int len=s1.length();
        if(n<len) return false;
        sort(s1.begin(),s1.end());
        while(i+len<=n){
            string temp=s2.substr(i, len);
            sort(temp.begin(),temp.end());
            if(s1==temp) return true;
            i++;
        }
        return false;
    }
};