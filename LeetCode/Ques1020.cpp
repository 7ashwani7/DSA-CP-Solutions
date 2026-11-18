#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void bfs(int r, int c, vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        queue<pair<int, int>> q;
        grid[r][c] = 0;
        q.push({r, c});
        while (q.size() > 0) {
            int x = q.front().first;
            int y = q.front().second;
            q.pop();
            // Up
            if (x - 1 >= 0 && grid[x - 1][y] == 1) {
                grid[x - 1][y] = 0;
                q.push({x - 1, y});
            }
            // Down
            if (x + 1 < m && grid[x + 1][y] == 1) {
                grid[x + 1][y] = 0;
                q.push({x + 1, y});
            }
            // Left
            if (y - 1 >= 0 && grid[x][y - 1] == 1) {
                grid[x][y - 1] = 0;
                q.push({x, y - 1});
            }
            // Right
            if (y + 1 < n && grid[x][y + 1] == 1) {
                grid[x][y + 1] = 0;
                q.push({x, y + 1});
            }
        }
    }
    int numEnclaves(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        for (int i = 0; i < m; i++) {
            if (grid[i][0] == 1) bfs(i, 0, grid);
            if (grid[i][n - 1] == 1) bfs(i, n - 1, grid);
        }
        for (int j = 0; j < n; j++) {
            if (grid[0][j] == 1) bfs(0, j, grid);
            if (grid[m - 1][j] == 1) bfs(m - 1, j, grid);
        }
        int ans = 0;
        for (auto& row : grid) {
            for (auto x : row) {
                if (x == 1) ans++;
            }
        }
        return ans;
    }
};
// OR
class Solution {
public:
    void dfs(int r, int c, vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        grid[r][c] = 0;
        if (r - 1 >= 0 && grid[r - 1][c] == 1) dfs(r - 1, c, grid);
        if (r + 1 < m && grid[r + 1][c] == 1) dfs(r + 1, c, grid);
        if (c - 1 >= 0 && grid[r][c - 1] == 1) dfs(r, c - 1, grid);
        if (c + 1 < n && grid[r][c + 1] == 1) dfs(r, c + 1, grid);
    }
    int numEnclaves(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        for (int i = 0; i < m; i++) {
            if (grid[i][0] == 1) dfs(i, 0, grid);
            if (grid[i][n - 1] == 1) dfs(i, n - 1, grid);
        }
        for (int j = 0; j < n; j++) {
            if (grid[0][j] == 1) dfs(0, j, grid);
            if (grid[m - 1][j] == 1) dfs(m - 1, j, grid);
        }
        int ans = 0;
        for (auto& row : grid) {
            for (auto x : row) {
                if (x == 1) ans++;
            }
        }
        return ans;
    }
};
int main() {
    return 0;
}