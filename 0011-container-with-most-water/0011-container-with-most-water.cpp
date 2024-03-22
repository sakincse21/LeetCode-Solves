class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int maxx=INT_MIN,mn,len,temp;
        vector<int>v;
        int i=0,j=n-1;
        while(i<j){
            len=j-i;
            mn=min(height[i],height[j]);
            temp=mn*len;
            if(temp>maxx) maxx=temp;
            v.push_back(maxx);
            if(height[i]>height[j]) j--;
            else i++;
        }
        sort(v.begin(),v.end());
        return v[v.size()-1];
    }
};