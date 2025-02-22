class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==0 || strs[0]=="") return "";
        string ans="";
        bool check=true;
        int j=0;
        while(check){
            if(strs[0].length()==j) break;
            char ch=strs[0][j];
            for(int i=0;i<strs.size();i++){
                if(ch==strs[i][j]) continue;
                else{
                    check=false; break;
                }
            }
            if(!check) break;
            j++;
            ans+=ch;
        }
        return ans;
    }
};