class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        set<vector<int>>temp;
        int left,right,sum;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        if(nums.size()<3) return ans;
        for(int i=0;i<n;i++){
            left=i+1; right=n-1;
            while(left<right){
                sum=nums[left]+nums[right]+nums[i];
                if(sum==0) {
                    temp.insert({nums[i],nums[left],nums[right]});
                    left++; right--;
                }
                else if(sum>0){
                    right--;
                }else{
                    left++;
                }
            }
        }
        for(auto it:temp){
            ans.push_back(it);
        }
        return ans;
    }
};