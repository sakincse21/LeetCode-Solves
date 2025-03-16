class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>>ans;
        map<int,int>m1; map<int,int>m2;
        for(auto it:nums1){
            m1[it]++;
        }
        for(auto it:nums2){
            m2[it]++;
        }
        vector<int>v1; vector<int>v2;
        map<int,int>m11; map<int,int>m22;
        for(auto it:nums1){
            if(m2[it]==0 && m11[it]==0) {v1.push_back(it); m11[it]++;}
        }
        for(auto it:nums2){
            if(m1[it]==0 && m22[it]==0) {v2.push_back(it); m22[it]++;}
        }
        ans.push_back(v1); ans.push_back(v2);
        return ans;
    }
};