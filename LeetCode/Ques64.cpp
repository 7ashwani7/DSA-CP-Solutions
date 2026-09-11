#include <bits/stdc++.h>
using namespace std;
// Top-Down (Memoization) DP
class Solution {
public:
    vector<vector<int>> arr, dp;
    int n, m;
    int f(int i, int j){
        if(i == n - 1 && j == m - 1) return arr[i][j];
        if(i >= n || j >= m) return INT_MAX;
        if(dp[i][j] != -1) return dp[i][j];
        int down = f(i + 1, j);
        int right = f(i, j + 1);
        int ans = min(down, right);
        if(ans == INT_MAX) return dp[i][j] = INT_MAX;
        return dp[i][j] = arr[i][j] + ans;
    }
    int minPathSum(vector<vector<int>>& grid) {
        arr = grid;
        n = arr.size();
        m = arr[0].size();
        dp.assign(n, vector<int>(m, -1));
        return f(0, 0);
    }
};
// Bottom-Up (Tabulation) DP
class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> dp(n, vector<int>(m));
        dp[0][0] = grid[0][0];
        // First row
        for(int j = 1; j < m; j++) dp[0][j] = grid[0][j] + dp[0][j - 1];
        // First column
        for(int i = 1; i < n; i++) dp[i][0] = grid[i][0] + dp[i - 1][0];
        // Remaining cells
        for(int i = 1; i < n; i++){
            for(int j = 1; j < m; j++){
                dp[i][j] = grid[i][j] + min(dp[i - 1][j], dp[i][j - 1]);
            }
        }
        return dp[n - 1][m - 1];
    }
};
int main() {
    return 0;
}