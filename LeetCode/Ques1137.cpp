#include <bits/stdc++.h>
using namespace std;
// Top-Down (Memoization) DP

class Solution {
public:
    vector<int> dp;
    int fibo(int n){
        if(n<=1) return n;
        if(n==2) return 1;
        if(dp[n] != -1) return dp[n];
        return dp[n] = fibo(n-1) + fibo(n-2) + fibo(n-3);
    }
    int tribonacci(int n) {
        dp.assign(n+1, -1);
        return fibo(n);
    }
};
// Bottom-Up (Tabulation) DP
class Solution {
public:
    int tribonacci(int n) {
        vector<int> dp(38);
        if(n<=1) return n;
        dp[0] = 0;
        dp[1] = 1;
        dp[2] = 1;
        for(int i=3; i<=n; i++){
            dp[i] = dp[i-1]+ dp[i-2] + dp[i-3];
        }
        return dp[n];
    }
};
int main() {
    return 0;
}