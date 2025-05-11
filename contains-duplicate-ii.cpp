class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int,vector<int>>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]].push_back(i);
        }
        for(auto it:mp){
            vector<int>v=it.second;
            if(v.size()>1){
                int i=0;
                while(i<v.size()-1){
                    if(v[i+1]-v[i]<=k){
                        return true;
                    }
                    i++;
                    }
            }
        }
        return false;
    }
};