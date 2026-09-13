#include <bits/stdc++.h>
using namespace std;
//// Top-Down (Memoization) DP
class Solution {
public:
    vector<int> dp;
    int f(int n){
        if(n == 0 || n == 1) return 1;
        if(n == 2) return 2;
        if(dp[n] != -1) return dp[n];
        int sum = 0;
        for(int k = 1; k <= n; k++){
            sum += f(k - 1) * f(n - k);
        }
        return dp[n] = sum;
    }
    int numTrees(int n){
        dp.clear();
        dp.resize(n + 1, -1);
        return f(n);
    }
};
// Bottom-Up (Tabulation) DP
class Solution {
public:
    int numTrees(int n){
        vector<int> dp(n + 1);
        dp[0] = 1;
        dp[1] = 1;
        if(n >= 2) dp[2] = 2;
        for(int i = 3; i <= n; i++){
            dp[i] = 0;
            for(int k = 1; k <= i; k++){
                dp[i] += dp[k - 1] * dp[i - k];
            }
        }
        return dp[n];
    }
};
int main() {
    return 0;
}