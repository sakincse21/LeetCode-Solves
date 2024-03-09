class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        long long total=1;
        int zero=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                zero++; continue;
            }
            total=total*nums[i];
        }
        vector<int>v;
        for(int i=0;i<nums.size();i++){
            if(zero>1){
                v.push_back(0);
            }else if(nums[i]==0){
                v.push_back(total);
            }else if(zero==1){
                v.push_back(0);
            }else{
                v.push_back(total/nums[i]);
            }
        }
        return v;
    }
};