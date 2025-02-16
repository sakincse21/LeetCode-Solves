class Solution {
public:

    string encode(vector<string>& strs) {
        string s="";
        for(auto it:strs){
            int t=it.length();
            s+=('0'+t/100); t=t%100;
            s+=('0'+t/10); t=t%10;
            s+=('0'+t);
            s+=it;
        }
        return s;
    }

    vector<string> decode(string s) {
        vector<string>v;
        for(int i=0;i<s.length();){
            int n=0;
            n=n*10+(s[i]-'0');
            n=n*10+(s[i+1]-'0');
            n=n*10+(s[i+2]-'0');
            string t=s.substr(i+3,n);
            i+=(3+n);
            v.push_back(t);
        }
        return v;
    }
};
