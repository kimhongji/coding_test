class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min = INT_MAX;
        int max = prices[0];

        int profit = 0;
        int sum = 0;

        for (int i = 0; i<prices.size(); i++) {
            if (prices[i] < min) {
                min = prices[i];
            }
            if (prices[i] > max) {
                max = prices[i];
            }
            if (prices[i] < max) {
                min = prices[i];
                profit += sum;
                sum = 0;
                max = 0;
            }

            sum = prices[i] - min;
            //cout << sum << endl;

        }

        profit += sum;
        
    
        return profit;
    }
};

//https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii
