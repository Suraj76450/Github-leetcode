#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int min_buy_price = prices[0];
        int maximum_profit = 0;
        for (int i = 0; i < n; i++){
            int profit = prices[i] - min_buy_price;
            maximum_profit = max(maximum_profit, profit);
            min_buy_price = min(min_buy_price, prices[i]);
        }
        return maximum_profit;
    }
};