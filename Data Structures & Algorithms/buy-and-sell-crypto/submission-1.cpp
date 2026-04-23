class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int l=0;
        int r=0;
        int n=prices.size();
        int maxprofit=0;
        while(r<n){
            if(prices[r]>prices[l]){
                int profit=prices[r]-prices[l];
                maxprofit=max(profit,maxprofit);

            }
            else{
                l=r;
            }
            r++;
        }
        return maxprofit;

    }
};
