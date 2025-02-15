class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0; int j=height.size()-1;
        int ans=INT_MIN;
        while(i<j){
            int length=j-i;
            int value=length*min(height[i],height[j]);
            ans=max(ans,value);
            if(height[i]<height[j]) i++;
            else j--;

        }
        return ans;
    }
};