class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int>sums;
        sums.push_back(nums[0]);
        int sum=nums[0];
        if(nums.size()==1) return 0;
        for(int i=1;i<nums.size();i++){
            sum+=nums[i];
            sums.push_back(sum);
        }
        int left=0; int rightmost=sums[sums.size()-1]; int right=rightmost;
        for(int i=0;i<nums.size();i++){
            right=rightmost-sums[i];
            if(left==right) return i;
            left=sums[i];
        }
        return -1;
    }
};