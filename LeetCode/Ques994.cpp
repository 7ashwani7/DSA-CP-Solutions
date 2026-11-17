#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<int, int>> q;
        int fresh = 0;
        int n = grid.size();
        int m = grid[0].size();
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(grid[i][j] == 1) fresh++;
                else if(grid[i][j] == 2) q.push({i, j});
            }
        }
        q.push({-1, -1});
        int mins = 0;
        vector<vector<int>> dir = {{-1, 0},{1, 0},{0, -1},{0, 1}};
        while(!q.empty()){
            auto cur = q.front();
            q.pop();
            if(cur.first == -1 && cur.second == -1){
                mins++;
                if(!q.empty()) q.push({-1, -1});
                else break;
            }
            else{
                int r = cur.first;
                int c = cur.second;
                for(int d = 0; d < 4; d++){
                    int nr = r + dir[d][0];
                    int nc = c + dir[d][1];
                    if(nr < 0 || nc < 0 || nr >= n || nc >= m) continue;
                    if(grid[nr][nc] == 0 || grid[nr][nc] == 2) continue;
                    fresh--;
                    grid[nr][nc] = 2;
                    q.push({nr, nc});
                }
            }
        }
        if(fresh == 0) return mins - 1;
        return -1;
    }
};
int main() {
    return 0;
}