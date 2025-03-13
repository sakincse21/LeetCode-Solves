class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int i=0; int j; double sum=0;
        for(j=0;j<k;j++){
            sum+=nums[j];
        }
        double avg=sum/k;
        while(j<nums.size()){
            sum+=(nums[j]-nums[i]);
            i++;j++;
            avg=max(avg,(sum/k));
        }
        return avg;
    }
};