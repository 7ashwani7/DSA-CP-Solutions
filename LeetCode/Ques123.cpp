#include <bits/stdc++.h>
using namespace std;
// Top-Down (Memoization) DP
class Solution {
public:
    int dp[100005][10][2];
    int f(vector<int>& prices, int i, int k, bool buy){
        if(i == prices.size()) return 0;
        if(dp[i][k][buy] != -1) return dp[i][k][buy];
        int ans = f(prices, i + 1, k, buy);
        if(buy) ans = max(ans,f(prices, i + 1, k, false) - prices[i]);
        else{
            if(k > 0) ans = max(ans, prices[i] + f(prices, i + 1, k - 1, true));
        }
        return dp[i][k][buy] = ans;
    }
    int maxProfit(vector<int>& prices) {
        memset(dp, -1, sizeof(dp));
        return f(prices, 0, 2, true);
    }
};
// Bottom-Up (Tabulation) DP
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<vector<vector<int>>> dp(n + 1, vector<vector<int>>(3, vector<int>(2, 0)));
        for(int i = n - 1; i >= 0; i--){
            for(int k = 0; k <= 2; k++){
                // Buy state
                dp[i][k][1] = max(dp[i + 1][k][1], dp[i + 1][k][0] - prices[i]);
                // Sell state
                if(k > 0){
                    dp[i][k][0] = max(dp[i + 1][k][0], prices[i] + dp[i + 1][k - 1][1]);
                }
                else{
                    dp[i][k][0] = dp[i + 1][k][0];
                }
            }
        }
        return dp[0][2][1];
    }
};
int main() {
    return 0;
}