class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        if(n==1){return 0;}
        int total=0;
        for(int i=0;i<n-1;i++){
            if(prices[i+1]>prices[i]){
                total+=(prices[i+1]-prices[i]);
            }else{
                continue;
            }
        }
        return total;
    }
};