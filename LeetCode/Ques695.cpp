#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int bfs(int r, int c, vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        queue<pair<int, int>> q;
        q.push({r, c});
        grid[r][c] = 0;
        int count = 1;
        while (!q.empty()) {
            int x = q.front().first;
            int y = q.front().second;
            q.pop();
            if (x > 0 && grid[x - 1][y] == 1) {
                grid[x - 1][y] = 0;
                count++;
                q.push({x - 1, y});
            }
            if (x + 1 < m && grid[x + 1][y] == 1) {
                grid[x + 1][y] = 0;
                count++;
                q.push({x + 1, y});
            }
            if (y > 0 && grid[x][y - 1] == 1) {
                grid[x][y - 1] = 0;
                count++;
                q.push({x, y - 1});
            }
            if (y + 1 < n && grid[x][y + 1] == 1) {
                grid[x][y + 1] = 0;
                count++;
                q.push({x, y + 1});
            }
        }
        return count;
    }

    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int ans = 0;
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[0].size(); j++) {
                if (grid[i][j] == 1) {
                    ans = max(ans, bfs(i, j, grid));
                }
            }
        }
        return ans;
    }
};
// OR
class Solution {
public:
    int dfs(int r, int c, vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        grid[r][c] = 0;
        int count = 1;
        if(r > 0 && grid[r - 1][c] == 1) count += dfs(r - 1, c, grid);
        if(r + 1 < m && grid[r + 1][c] == 1) count += dfs(r + 1, c, grid);
        if(c > 0 && grid[r][c - 1] == 1) count += dfs(r, c - 1, grid);
        if(c + 1 < n && grid[r][c + 1] == 1) count += dfs(r, c + 1, grid);
        return count;
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int ans = 0;
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[0].size(); j++) {
                if (grid[i][j] == 1) {
                    ans = max(ans, dfs(i, j, grid));
                }
            }
        }
        return ans;
    }
};
int main() {
    return 0;
}