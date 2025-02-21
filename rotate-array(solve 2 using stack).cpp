class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        stack<int>s;
        int kk=k%n;
        for(int i=n-1-kk;i>=0;i--){
            s.push(nums[i]);
        }
        for(int i=n-1;i>=n-kk;i--){
            s.push(nums[i]);
        }
        int i=0;
        while (!s.empty()) {
            nums[i]=s.top(); i++;
            s.pop();
        }
    }
};