class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int bestbuy = prices[0];
        int maxProfit = 0;

        for(int i = 1; i < prices.size(); i++) {
            bestbuy = min(bestbuy, prices[i]);

            maxProfit = max(maxProfit, prices[i] - bestbuy);
        }

        return maxProfit;
    }
};