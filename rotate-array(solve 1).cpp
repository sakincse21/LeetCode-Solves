class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>v;
        int kk=k%n;
        for(int i=n-kk;i<n;i++){
            v.push_back(nums[i]);
        }
        int right=n-1;
        for(int i=n-1-kk;i>=0;i--){
            nums[right]=nums[i];
            right--;
        }
        for(int i=0;i<kk;i++){
            nums[i]=v[i];
        }
    }
};