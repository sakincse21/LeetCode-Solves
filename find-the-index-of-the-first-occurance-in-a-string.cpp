class Solution {
public:
    int strStr(string haystack, string needle) {
        int ns=needle.length();
        int hs=haystack.length();
        if(ns>hs) return -1;
        string temp;
        for(int i=0;i<=hs-ns;i++){
            temp=haystack.substr(i, ns);
            if(temp==needle) return i;
        }
        return -1;
    }
};