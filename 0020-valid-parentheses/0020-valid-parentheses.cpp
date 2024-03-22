class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        char ch;
        int n=s.length();
        if(n==1) return false;
        for(int i=0;i<n;i++){
            if(s[i]=='(' || s[i]=='[' || s[i]=='{') st.push(s[i]);
            else{
                if(st.empty()==true) return false;
                ch=st.top();
                st.pop();
                if((s[i]==']' && ch=='[') || (s[i]==')' && ch=='(') || (s[i]=='}' && ch=='{')){
                    continue;
                }else{
                    return false;
                }
            }
        }
        if(st.empty()==true)return true;
        else return false;
    }
};