class Solution {
public:
    string reverseWords(string s) {
        vector<string>st;
        string t="";
        int n=s.length();
        for(int i=0;i<n;i++){
            if(s[i]!=' '){
                t+=s[i];
            }else{
                if(t.length()>0){
                    st.push_back(t);
                    t="";
                }
            }
        }
        if(t.length()>0){
        st.push_back(t);
        
        }
        string ans="";
        int j=st.size()-1;
        while(j>=0){
            ans=ans+st[j];
            if(j!=0) ans=ans+" ";
            j--;
        }
        return ans;
    }
};