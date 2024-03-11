class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int i=0,j=0;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        set<int>v;
        int n1=nums1.size(); int n2=nums2.size();
        while(i<n1 && j<n2){
            if(nums1[i]==nums2[j]){
                v.insert(nums1[i]);
                i++;j++;
            }else if(nums1[i]>nums2[j]){
                j++;
            }else{
                i++;
            }
        }
        while(i<n1){
            if(nums1[i]==nums2[j-1]){
                v.insert(nums1[i]);
                i++;
            }else{
                i++;
            }
        }while(j<n2){
            if(nums1[i-1]==nums2[j]){
                v.insert(nums2[j]);
                j++;
            }else{
                j++;
            }
        }
        vector<int>s;
        for(auto it:v){
            s.push_back(it);
        }
        return s;
    }
};