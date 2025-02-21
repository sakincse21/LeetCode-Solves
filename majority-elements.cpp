class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int>m;
        for(auto num:nums){
            m[num]++;
        }
        int ans=INT_MIN;
        int result;
        for(auto it:m){
            if(it.second>ans){
                ans=it.second;
                result=it.first;
            }
        }
        return result;
    }
};