class Solution {
public:
    string removeStars(string s) {
        stack<char>st;
        for(int i=0;i<s.length();i++){
            if(s[i]!='*') st.push(s[i]);
            else if(st.empty()==false) st.pop();
        }
        string ans="";
        while(!st.empty()){
            ans+=st.top(); st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};