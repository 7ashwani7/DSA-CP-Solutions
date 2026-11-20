#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>> ans = grid;
        k = k % (m * n);
        ans[0][0] = grid[m-1][n-1];
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){ 
                int idx = i * n + j;
                int newIdx = (idx + k) % (n * m);
                int row = newIdx / n;
                int col = newIdx % n;
                ans[row][col] = grid[i][j];
            }
        }
        return ans;
    }
};
int main() {
    return 0;
}