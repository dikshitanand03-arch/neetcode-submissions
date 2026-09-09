class Solution {
public:
int buy=INT_MAX;
int profit=INT_MIN;
    int maxProfit(vector<int>& prices) {
        for(int i=0;i<prices.size();i++){
            buy=min(prices[i],buy);
           profit=max(profit,prices[i]-buy);
        }
        return profit;
    }
 
};
