#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        int m = grid1.size();
        int n = grid1[0].size();
        int dr[] = {-1, 1, 0, 0};
        int dc[] = {0, 0, -1, 1};
        int count = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid2[i][j] == 1) {
                    queue<pair<int, int>> q;
                    q.push({i, j});
                    grid2[i][j] = 0;
                    bool subIsland = true;
                    while (!q.empty()) {
                        int r = q.front().first;
                        int c = q.front().second;
                        q.pop();
                        if (grid1[r][c] == 0) subIsland = false;
                        for (int k = 0; k < 4; k++) {
                            int nr = r + dr[k];
                            int nc = c + dc[k];
                            if (nr >= 0 && nr < m && nc >= 0 && nc < n && grid2[nr][nc] == 1) {
                                grid2[nr][nc] = 0;
                                q.push({nr, nc});
                            }
                        }
                    }
                    if (subIsland) count++;
                }
            }
        }
        return count;
    }
};
int main() {
    return 0;
}