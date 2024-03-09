class Solution {
public:
    
    vector<int> twoSum(vector<int>& numbers, int target) {
        int t2,n=numbers.size();
        int i=0,j=n-1,chk=0;
        while(i<(n-1)){
                if(numbers[i]+numbers[j]==target){
                    chk=1;
                    break;
                }else if(numbers[i]+numbers[j]>target){
                    j--;
                }else{
                    i++;
                }
        }
        return {i+1,j+1};
    }
};