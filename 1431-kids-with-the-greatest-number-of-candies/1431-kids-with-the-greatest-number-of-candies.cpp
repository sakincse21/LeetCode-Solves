class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxx=*max_element(candies.begin(),candies.end());
        int n=candies.size();
        vector<bool>v;
        for(auto it:candies){
            if(it+extraCandies>=maxx) v.push_back(true);
            else v.push_back(false);
        }
        return v;
    }
};