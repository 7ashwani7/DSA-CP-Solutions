#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> lastVisitedCell(vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<bool>> vis(m, vector<bool>(n, 0));
        int r = 0;
        int c = 0;
        vis[r][c] = 1;
        while (true) {
            int nr = r;
            int nc = c;
            if (grid[r][c] == 'L') {
                nc--;
            } else if (grid[r][c] == 'R') {
                nc++;
            } else if (grid[r][c] == 'U') {
                nr--;
            } else if (grid[r][c] == 'D') {
                nr++;
            }
            if (nr < 0 || nr >= m || nc < 0 || nc >= n || vis[nr][nc]) {
                break;
            }
            r = nr;
            c = nc;
            vis[r][c] = 1;
        }
        return {r, c};
    }
};
int main() {
    return 0;
}