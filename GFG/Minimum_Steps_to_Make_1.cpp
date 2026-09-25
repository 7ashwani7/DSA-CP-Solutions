#include <bits/stdc++.h>
using namespace std;
// Top-Down (Memoization) DP
class Solution {
  public:
    vector<int> dp;
    const int inf = 1e9;
    int ftd(int i){
        if(i == 1) return 0;
        if(i == 2 || i == 3) return 1;
        if(dp[i] != -1) return dp[i];
        return dp[i] = 1 + min({ftd(i - 1),(i % 2 == 0) ? ftd(i / 2) : inf,(i % 3 == 0) ? ftd(i / 3) : inf});
    }
    int getMinSteps(int n) {
        // code here
        dp.assign(n+1, -1);
        return ftd(n);
    }
};
// Bottom-Up (Tabulation) DP
class Solution {
  public:
    int getMinSteps(int n) {
        // code here
        if(n==1)  return 0;
        vector<int> dp(n + 1, 0);
        const int inf = 1e9;
        dp[1] = 0;
        if(n >= 2) dp[2] = 1;
        if(n >= 3) dp[3] = 1;
        for(int i=4; i<=n; i++){
            dp[i] = 1 + min({dp[i - 1],(i % 2 == 0) ? dp[i / 2] : inf,(i % 3 == 0) ? dp[i / 3] : inf});
        }
        return dp[n];
    }
};
int main() {
    return 0;
}