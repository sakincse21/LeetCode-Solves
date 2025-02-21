class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int ans=0; int k=0; int j=0;
        for(int i=0;i<n;i++){
            int count=0;
            j=i;
            int temp=nums[i];
            while(j<n && temp==nums[j]){
                count++;
                if(count<=2){nums[k]=temp; k++;}
                j++;
            }
            i=j-1;
            if(count>=2){
                ans+=2;;
            }else{
                ans++;
            }
        }
        return ans;
    }
};