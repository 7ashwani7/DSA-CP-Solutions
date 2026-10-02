#include <bits/stdc++.h>
using namespace std;
// Top-Down (Memoization) DP
class Solution {
public:
    vector<vector<int>> dp;
    int f(vector<int>& p, int i, bool buy){
        if(i == p.size()) return 0;
        if(dp[i][buy] != -1) return dp[i][buy];
        int ans = f(p, i + 1, buy);
        if(buy) ans = max(ans, f(p, i + 1, 0) - p[i]);
        else ans = max(ans, p[i] + f(p, i + 1, 1));
        return dp[i][buy] = ans;
    }
    int maxProfit(vector<int>& prices) {
        dp.assign(prices.size(), vector<int>(2, -1));
        return f(prices, 0, 1);
    }
};
// Bottom-Up (Tabulation) DP
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<vector<int>> dp(n + 1, vector<int>(2, 0));
        for(int i = n - 1; i >= 0; i--){
            dp[i][1] = max(dp[i + 1][1], dp[i + 1][0] - prices[i]);
            dp[i][0] = max(dp[i + 1][0], prices[i] + dp[i + 1][1]);
        }
        return dp[0][1];
    }
};
int main() {
    return 0;
}