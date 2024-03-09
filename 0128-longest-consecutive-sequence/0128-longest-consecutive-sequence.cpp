class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0) return 0;
        sort(nums.begin(),nums.end());
        int top=1,cnt=1;
        for(int i=0;i<nums.size()-1;i++){
            //cnt=1;
            if(nums[i+1]==(nums[i]+1)){
                cnt++;
            }else if(nums[i+1]==nums[i]){
                continue;
            }else{
                if(cnt>=top) {
                    top=cnt; cnt=1;
                }
                cnt=1;
            }
        }
        if(cnt>top) top=cnt;
        return top;
    }
    
};