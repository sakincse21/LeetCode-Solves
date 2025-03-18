class Solution {
public:
    bool closeStrings(string word1, string word2) {
        map<char,int>m1; map<char,int>m2;
        for(int i=0;i<word1.length();i++){
            m1[word1[i]]++;
        }
        for(int i=0;i<word2.length();i++){
            m2[word2[i]]++;
        }
        vector<int>v1,v2,v3,v4;
        for(auto it:m1){
            v1.push_back(it.second);
            v3.push_back(it.first);
        }
        for(auto it:m2){
            v2.push_back(it.second);
            v4.push_back(it.first);
        }
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        sort(v3.begin(),v3.end());
        sort(v4.begin(),v4.end());
        if(v1==v2 && v3==v4)return true;
        return false;
    }
};