#include <bits/stdc++.h>
using namespace std;
// Top-Down (Memoization) DP
class Solution {
public:
    vector<int> dp;
    const int INF = 1e9;
    int ftd(int n , vector<int>& arr){
        if(n == 0) return 0;
        if(dp[n] != -1) return dp[n];
        int ans = INF;
        for(int i=0; i<arr.size(); i++){
            if(arr[i] <= n) ans = min(ans, 1 + ftd(n - arr[i] , arr));
        }
        return dp[n] = ans;
    }
    int coinChange(vector<int>& coins, int amount) {
        dp.assign(amount + 1, -1);
        int ans = ftd(amount , coins);
        return (ans >= INF) ? -1 : ans;
    }
};
// Bottom-Up (Tabulation) DP
class Solution {
public:
    int coinChange(vector<int>& coins, int n) {
        vector<int> dp(n + 1, INT_MAX);
        dp[0] = 0;
        for(int i=1; i<=n; i++) {
            for(int coin : coins) {
                if(i >= coin && dp[i - coin] != INT_MAX){
                    dp[i] = min(dp[i], dp[i - coin] + 1);
                }
            }
        }
        return (dp[n] == INT_MAX) ? -1 : dp[n];
    }
};
int main() {
    return 0;
}