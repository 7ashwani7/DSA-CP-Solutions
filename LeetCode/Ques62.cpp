#include <bits/stdc++.h>
using namespace std;
// Top-Down (Memoization) DP
class Solution {
public:
    vector<vector<int>> dp;
    int helper(int sr, int sc, int er, int ec){
        if(sr == er && sc == ec) return 1;
        if(sr > er || sc > ec) return 0;
        if(dp[sr][sc] != -1) return dp[sr][sc];
        return dp[sr][sc] = helper(sr, sc + 1, er, ec) + helper(sr + 1, sc, er, ec);
    }
    int uniquePaths(int m, int n) {
        dp.assign(m, vector<int>(n, -1));
        return helper(0, 0, m - 1, n - 1);
    }
};
// Bottom-Up (Tabulation) DP
class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<int> prev(n, 0);
        for(int i=0; i<m; i++){
            vector<int> curr(n, 0);
            for(int j=0; j<n; j++){
                if(i == 0 && j == 0) curr[j] = 1;
                else {
                    int up = (i > 0) ? prev[j] : 0;
                    int left = (j > 0) ? curr[j-1] : 0;
                    curr[j] = up + left;
                }
            }
            prev = curr;
        }
        return prev[n-1];
    }
};
int main() {
    return 0;
}