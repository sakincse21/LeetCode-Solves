class Solution {
public:
    int findMin(vector<int>& nums) {
        int i=0; int j=nums.size()-1;
        int mid=(i+j)/2;
        int ans=nums[mid];
        while(i<=j){
            mid=(i+j)/2;
            if((nums[j]>nums[i]) || (nums[mid]<nums[i] && nums[mid]<nums[j])) {
                ans=min(ans,nums[mid]);
                j=mid-1;
            }
            else{
                ans=min(nums[mid],ans);
                i=mid+1;
            }
        }
        return ans;
    }
};