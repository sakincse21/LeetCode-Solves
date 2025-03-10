class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int i=0; int j=nums.size()-1; int temp; int ans=0;
        while(i<j){
            temp=nums[i]+nums[j];
            if(temp==k){ ans++;i++;j--; }
            else if(temp>k) j--;
            else i++;
        }
        return ans;
    }
};