#include <bits/stdc++.h>
using namespace std;
// Top-Down (Memoization) DP
class Solution {
public:
    vector<int> dp;
    int helper(vector<int>& cost, int i){
        if(i == 0 || i == 1) return cost[i];
        if(dp[i] != -1) return dp[i];
        return dp[i] = cost[i] + min(helper(cost, i - 1), helper(cost, i - 2));
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        dp.assign(n, -1);
        return min(helper(cost, n - 1), helper(cost, n - 2));
    }
};
//Bottom-Up (Tabulation) DP
class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int> dp(n);
        dp[0] = cost[0];
        dp[1] = cost[1];
        for(int i=2; i<n; i++){
            dp[i] = cost[i] + min(dp[i-1], dp[i-2]);
        }
        return min(dp[n-1], dp[n-2]);
    }
};
int main() {
    return 0;
}