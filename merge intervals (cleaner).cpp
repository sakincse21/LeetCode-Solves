class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>ans;
        if(intervals.size()<=1) return intervals;
        sort(intervals.begin(),intervals.end());
        int i=0;
        vector<int>interval=intervals[i];
        for(i=1;i<intervals.size();i++){
            vector<int>v;
            if(interval[1]>=intervals[i][0]){
                interval[1]=max(interval[1],intervals[i][1]);
            }else{
                ans.push_back(interval);
                interval=(intervals[i]);
            }
        }
            ans.push_back(interval);
        return ans;
    }
};