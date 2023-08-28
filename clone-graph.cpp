//dynamic programming

#include <iostream>
#include <vector>

int maxProfit(int k, std::vector<int> & prices){
    int n = prices.size();

    if(n <= 1 || k == 0)
    return 0;

    // if k is large enough , we can just perform transactions as many times as possible
    if (k >= n / 2){
        int maxProfit = 0;
        for (int i = 1; i < n; ++i){
            if(prices[i] > prices[i - 1])
             maxProfit += prices[i] - prices[i - 1];
        }
        return maxProfit;
    }

    std::vector<std::vector<int>> dp(k + 1, std::vector<int>(n,0));

    for (int i = 1; i <= k; ++i){
        int maxDiff = -prices[0];
        for (int j = 1; j < n; ++j){
            dp[i][j] = std::max(dp[i][j - 1], prices[j] + maxDiff);
            maxDiff = std::max(maxDiff, dp[i - 1][j] - prices[j]);
        }
    }

    return dp[k][n - 1];
}

int main() {
    int k = 2;
    std::vector<int> prices = { 3,2,6,5,0,3};

    int result = maxProfit(k, prices);
    std::cout << "maximum profit:" << result << std:: endl;

    return 0;
}