class Solution {
public:
    int compress(vector<char>& chars) {
        int j=0; int n=chars.size(); int count=0;
        vector<char>vc; vector<int>vi;
        for(int i=0;i<n;i++){
            count=0;
            j=i;
            while(j<n && chars[i]==chars[j]){
                j++;
                count++;
            }
            vc.push_back(chars[i]);
            vi.push_back(count);
            i=j-1;
        }
        string s="";
        for(int i=0;i<vc.size();i++){
            s+=vc[i];
            if(vi[i]>1){
                string t="";
                while(vi[i]){
                    t+=('0'+(vi[i]%10));
                    vi[i]/=10;
                }
                reverse(t.begin(),t.end());
                s+=t;
            }
        }
        for(int i=0;i<s.length();i++){
            chars[i]=s[i];
        }
        return s.length();
    }
};