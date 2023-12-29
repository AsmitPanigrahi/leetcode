#include <vector>
#include <algorithm>

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        if (n <= 1) {
            return 0;  // No profit can be made with less than two prices
        }

        int maxProfit = 0;
        int minPrice = prices[0];

        for (int i = 1; i < n; ++i) {
            int currentProfit = prices[i] - minPrice;
            maxProfit = max(maxProfit, currentProfit);
            minPrice = min(minPrice, prices[i]);
        }

        return maxProfit;
    }
};
