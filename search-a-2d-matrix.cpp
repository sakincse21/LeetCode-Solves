class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i=0; int j=matrix.size()-1;
        int n=matrix[0].size();
        int mid;
        while(i<=j){
            mid=(i+j)/2;
            if(matrix[mid][0]==target) return true;
            else if(matrix[mid][0]>target) j=mid-1;
            else if(matrix[mid][n-1]>=target && matrix[mid][0]<=target){break;}
            else i=mid+1;  
        }
        vector<int>v=matrix[mid];
        i=0; j=v.size()-1;
        while(i<=j){
            int mid=(i+j)/2;
            if(v[mid]==target) return true;
            else if(v[mid]>target) j=mid-1;
            else i=mid+1; 
        }
        return false;
    }
};