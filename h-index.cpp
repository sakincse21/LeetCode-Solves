class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(),citations.end());
        int n=citations.size();
        int count=0; int ans=n-1;
        for(int i=n-1;i>=0;i--){
            if(count<=citations[i] && count<=ans){
                count++;
                ans=citations[i];
            }
        }
        return ans<count?ans:count;
    }
};