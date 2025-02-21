class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxx=0; int n=nums.size();
        int last=n-1;
        if(last==0) return true;
        for(int i=0;i<n-1;i++){
            maxx=max(maxx, i+nums[i]);
            if((maxx<=i)) return false;
        }
        if(maxx>=n-1) return true;
        return false;
    }
};