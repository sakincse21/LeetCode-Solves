class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        vector<int>v;
        v.push_back(0);
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0) v.push_back(i);
        }
        v.push_back(nums.size());
        int i=0;int j=k+1;
        if(j>nums.size() || k>=v.size()-2){
            return nums.size();
        }
        int ans=v[j]-v[i];
        while(j<v.size()){
            ans=max(ans, (v[j]-v[i]-1));
            i++;j++;
        }
        return ans;
    }
};