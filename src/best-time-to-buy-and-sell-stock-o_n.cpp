class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int n = prices.size();
        int min = INT_MAX;
        for(int i = 0; i < n; i++){
            if(prices[i] < min){
                min = prices[i];
            }
            
            if(prices[i] - min > profit){
                profit = prices[i]-min;
            }
        }
        return profit;
    }
};

//https://leetcode.com/problems/best-time-to-buy-and-sell-stock
