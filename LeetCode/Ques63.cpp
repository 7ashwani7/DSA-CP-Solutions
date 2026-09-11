#include <bits/stdc++.h>
using namespace std;
// Top-Down (Memoization) DP
class Solution {
public:
    vector<vector<int>> dp;
    int helper(vector<vector<int>>& arr, int i, int j){
        int m = arr.size();
        int n = arr[0].size();
        if(i>=m || j>=n) return 0;
        if(arr[i][j] == 1) return 0;
        if(i==m-1 && j==n-1) return 1;
        if(dp[i][j] != -1) return dp[i][j];
        return dp[i][j] = helper(arr, i + 1, j) + helper(arr, i, j + 1);
    }
    int uniquePathsWithObstacles(vector<vector<int>>& arr) {
        int m = arr.size();
        int n = arr[0].size();
        dp.assign(m, vector<int>(n, -1));
        return helper(arr, 0, 0);
    }
};
// Bottom-Up (Tabulation) DP
class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& arr) {
        int m = arr.size();
        int n = arr[0].size();
        vector<int> prev(n, 0);
        for(int i=0; i<m; i++){
            vector<int> curr(n, 0);
            for(int j=0; j<n; j++){
                if(arr[i][j]==1) curr[j] = 0;
                else if(i==0 && j==0) curr[j] = 1;
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