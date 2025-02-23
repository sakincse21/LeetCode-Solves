class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int i=0; int j=0; int sum=0; int ans=INT_MAX;
        while(i<n){
            while(sum<target && j<n){
                sum=sum+nums[j];
                j++;
            }
            if(sum>=target) ans=min(ans, j-i);
            sum=sum-nums[i];
            i++;
        }
        return ans==INT_MAX?0:ans;
    }
};