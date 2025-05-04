// Problem: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

#include <iostream>
#include <vector>
using namespace std;

int maxProfit (vector<int>& prices) {
    int bestBuy = prices[0], profit = 0;

    for (int i = 1; i < prices.size(); i++) {
        if(bestBuy < prices[i]) {
            profit = max(profit, prices[i] - bestBuy);
        }
        bestBuy = min(bestBuy, prices[i]);
    }

    return profit;
}

int main() {
    vector<int> prices = {5,9,10,3,6,4};
    int profit = maxProfit(prices);
    cout << "Max Profit: " << profit << endl;
    return 0;
}