class Solution {
public:
    int maxProfit(vector<int>& prices) {
      // time limit exceeded (o(n^2))
        int profit = 0;
        if (prices.size())
        for (int i = 0; i<prices.size(); i++){
            for (int j = i+1; j<prices.size(); j++) {
                if (profit < prices[j] - prices[i]) {
                    profit = prices[j] - prices[i];
                }
            }
        }

	return profit;
       }
};

// https://leetcode.com/problems/best-time-to-buy-and-sell-stock
