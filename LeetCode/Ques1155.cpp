#include <bits/stdc++.h>
using namespace std;
// Top-Down (Memoization) DP
class Solution {
public:
    int mod = 1000000007;
    vector<vector<int>> dp;
    int helper(int n, int k, int t){
        if(n == 0 && t == 0) return 1;
        if(n == 0) return 0;
        if(dp[n][t] != -1) return dp[n][t];
        long long ways = 0;
        for(int f = 1; f <= k; f++){
            if(t >= f){
                ways = (ways + helper(n - 1, k, t - f)) % mod;
            }
        }
        return dp[n][t] = ways;
    }
    int numRollsToTarget(int n, int k, int target) {
        dp.assign(n + 1, vector<int>(target + 1, -1));
        return helper(n, k, target);
    }
};
// Bottom-Up (Tabulation) DP
class Solution {
public:
    int mod = 1000000007;
    int numRollsToTarget(int n, int k, int target) {
        vector<vector<int>> dp(n + 1, vector<int>(target + 1, 0));
        dp[0][0] = 1;
        for(int i=1; i<=n; i++){          // number of dice
            for(int j=1; j<=target; j++){ // current sum
                long long ways = 0;
                for(int f=1; f<=k; f++){
                    if(j >= f){
                        ways = (ways + dp[i - 1][j - f]) % mod;
                    }
                }
                dp[i][j] = ways;
            }
        }
        return dp[n][target];
    }
};
int main() {
    return 0;
}