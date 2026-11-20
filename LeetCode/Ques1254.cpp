#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool dfs(vector<vector<int>>& grid, int r, int c) {
        int n = grid.size();
        int m = grid[0].size();
        if (r < 0 || r >= n || c < 0 || c >= m) {
            return false;
        }
        if (grid[r][c] == 1) {
            return true;
        }
        grid[r][c] = 1;
        bool up = dfs(grid, r - 1, c);
        bool down = dfs(grid, r + 1, c);
        bool left = dfs(grid, r, c - 1);
        bool right = dfs(grid, r, c + 1);
        return up && down && left && right;
    }
    int closedIsland(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int count = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 0) {
                    if (dfs(grid, i, j)) {
                        count++;
                    }
                }
            }
        }
        return count;
    }
};
// OR 
class Solution {
public:
    int closedIsland(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int ans = 0;
        int dr[] = {-1, 1, 0, 0};
        int dc[] = {0, 0, -1, 1};
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 0) {
                    queue<pair<int, int>> q;
                    q.push({i, j});
                    grid[i][j] = 1;
                    bool closed = true;
                    while (not q.empty()) {
                        int r = q.front().first;
                        int c = q.front().second;
                        q.pop();
                        if (r == 0 || r == m - 1 || c == 0 || c == n - 1) {
                            closed = false;
                        }
                        for (int k = 0; k < 4; k++) {
                            int nr = r + dr[k];
                            int nc = c + dc[k];
                            if (nr >= 0 && nr < m && nc >= 0 && nc < n && grid[nr][nc] == 0) {
                                grid[nr][nc] = 1;
                                q.push({nr, nc});
                            }
                        }
                    }
                    if (closed) ans++;
                }
            }
        }
        return ans;
    }
};
int main() {
    return 0;
}