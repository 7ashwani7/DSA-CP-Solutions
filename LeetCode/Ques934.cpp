#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int shortestBridge(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        queue<pair<int, int>> q;
        bool found = false;
        for (int i = 0; i < m && !found; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 1) {
                    grid[i][j] = -1;
                    q.push({i, j});
                    found = true;
                    break;
                }
            }
        }
        int dr[] = {-1, 1, 0, 0};
        int dc[] = {0, 0, -1, 1};
        while (not q.empty()) {
            auto [r, c] = q.front();
            q.pop();
            for (int k = 0; k < 4; k++) {
                int nr = r + dr[k];
                int nc = c + dc[k];
                if (nr >= 0 && nr < m && nc >= 0 && nc < n) {
                    if (grid[nr][nc] == 1) {
                        grid[nr][nc] = -1;
                        q.push({nr, nc});
                    }
                }
            }
        }
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == -1) {
                    q.push({i, j});
                }
            }
        }
        int ans = 0;
        while (not q.empty()) {
            int s = q.size();
            while (s--) {
                auto [r, c] = q.front();
                q.pop();
                for (int k = 0; k < 4; k++) {
                    int nr = r + dr[k];
                    int nc = c + dc[k];
                    if (nr >= 0 && nr < m && nc >= 0 && nc < n) {
                        if (grid[nr][nc] == 1) {
                            return ans;
                        }
                        if (grid[nr][nc] == 0) {
                            grid[nr][nc] = -1;
                            q.push({nr, nc});
                        }
                    }
                }
            }
            ans++;
        }
        return ans;
    }
};
int main() {
    return 0;
}