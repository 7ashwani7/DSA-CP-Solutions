#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<pair<int, int>> in;
    void dfs(vector<vector<int>>& grid, int r, int c, int newCol, int oldCol){
        int n = grid.size();
        int m = grid[0].size();
        if(r < 0 || c < 0 || r >= n || c >= m || grid[r][c] != oldCol) return;
        grid[r][c] = -newCol;

        dfs(grid, r + 1, c, newCol, oldCol);
        dfs(grid, r - 1, c, newCol, oldCol);
        dfs(grid, r, c + 1, newCol, oldCol);
        dfs(grid, r, c - 1, newCol, oldCol);

        if(!(r==0 || c==0 || r==n-1 || c==m-1 || grid[r+1][c] != -newCol || grid[r-1][c] != -newCol || grid[r][c+1] != -newCol || grid[r][c-1] != -newCol)){
            in.push_back({r, c});   
        }
    }
    vector<vector<int>> colorBorder(vector<vector<int>>& grid, int row, int col, int color) {
        int oldCol = grid[row][col];
        if(oldCol == color) return grid;
        dfs(grid, row, col, color, oldCol);
        for(auto p : in) {
            int r = p.first;
            int c = p.second;
            grid[r][c] = oldCol;
        }
        for(int i = 0; i < grid.size(); i++) {
            for(int j = 0; j < grid[0].size(); j++) {
                if(grid[i][j] < 0) grid[i][j] *= -1;
            }
        }
        return grid;
    }
};
int main() {
    return 0;
}