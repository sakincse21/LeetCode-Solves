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
            if((interval[0]<=intervals[i][0]&&interval[1]>=intervals[i][0])||(interval[0]<=intervals[i][1]&&interval[1]>=intervals[i][1]) || (intervals[i][0]<=interval[0]&&intervals[i][1]>=interval[0])||(intervals[i][0]<=interval[1]&&intervals[i][1]>=interval[1])){
                v.push_back(interval[0]);
                v.push_back(interval[1]);
                v.push_back(intervals[i][0]);
                v.push_back(intervals[i][1]);
                sort(v.begin(),v.end());
                interval={v[0],v[v.size()-1]};
            }else{
                ans.push_back(interval);
                interval=(intervals[i]);
            }
        if(i==intervals.size()-1){
            ans.push_back(interval);
        }
        }
        return ans;
    }
};