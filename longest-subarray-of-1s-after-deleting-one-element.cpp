class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        vector<int>v;
        v.push_back(0);
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0) v.push_back(i+1);
        }
        v.push_back(nums.size()+1);
        int k=1;
        int i=0;int j=2;
        if(j>=nums.size() || j>=v.size()){
            return nums.size()-1;
        }
        int ans=v[j]-v[0]-2;
        while(j<v.size()){
            ans=max(ans, (v[j]-v[i]-2));
            i++;j++;
        }
        return ans;
    }
};