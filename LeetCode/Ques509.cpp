#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int fib(int n) {
        if(n==0) return 0;
        if(n==1) return 1;
        return fib(n-1)+fib(n-2);
    }
};
// Top-Down (Memoization) DP
class Solution {
public:
    vector<int> dp;
    int fibo(int n){
        if(n<=1) return n;
        if(dp[n] != -1) return dp[n];
        return dp[n] = fibo(n-1) + fibo(n-2);
    }
    int fib(int n) {
        dp.clear();
        dp.resize(35 , -1);
        return fibo(n);
    }
};
// Bottom-Up (Tabulation) DP
class Solution {
public:
    int fib(int n) {
        vector<int> dp(n+1);
        if(n==0) return 0;
        dp[0] = 0;
        dp[1] = 1;
        for(int i=2; i<=n; i++){
            dp[i] = dp[i-1]+ dp[i-2];
        }
        return dp[n];
    }
};
int main() {
    return 0;
}