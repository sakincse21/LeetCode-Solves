class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        sort(piles.begin(),piles.end());
        int maxm = piles[n-1];
        if(h==n){
            return maxm;
        }else{
            int minm=1;
            int mid=(maxm+minm)/2;
            long long ans=0;
            vector<int>v;
            while(minm<=maxm){
                mid=(minm+maxm)/2;
                ans=0;
                for(int i=0;i<n;i++){
                    if(piles[i]<=mid) ans++;
                    else{
                        if(piles[i]%mid==0) ans+=(piles[i]/mid);
                        else ans+=((piles[i]/mid)+1);
                    }
                }
                if(ans>h) minm=mid+1;
                else maxm=mid-1;
                if(ans<=h) v.push_back(mid);
            }
            sort(v.begin(),v.end());
            return v[0];
        }
    }
};