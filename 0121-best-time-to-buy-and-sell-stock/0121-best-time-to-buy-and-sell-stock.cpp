class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minP = prices[0];
        int maxP = 0;

        for(int i = 1; i < prices.size(); i++) {
            int profit = prices[i] - minP;
            maxP = max(maxP, profit);
            minP = min(minP, prices[i]);
        }

        return maxP;
    }
};