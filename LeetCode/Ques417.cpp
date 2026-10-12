#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> dir = {{1,0}, {-1,0}, {0,1}, {0,-1}};
    int rows, cols;
    vector<vector<int>> h;
    vector<vector<bool>> bfs(queue<pair<int,int>> &q) {
        vector<vector<bool>> vis(rows, vector<bool>(cols, false));
        while (!q.empty()){
            auto cur = q.front();
            q.pop();
            int r = cur.first;
            int c = cur.second;
            if (vis[r][c]) continue;
            vis[r][c] = true;
            for (auto &d : dir){
                int nr = r + d[0];
                int nc = c + d[1];
                if(nr < 0 || nc < 0 || nr >= rows || nc >= cols) continue;
                if(vis[nr][nc]) continue;
                // Move only to equal or higher height
                if(h[nr][nc] < h[r][c]) continue;
                q.push({nr, nc});
            }
        }
        return vis;
    }
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        rows = heights.size();
        cols = heights[0].size();
        h = heights;
        queue<pair<int,int>> pacific;
        queue<pair<int,int>> atlantic;
        // Left & Right borders
        for(int i = 0; i < rows; i++){
            pacific.push({i, 0});
            atlantic.push({i, cols - 1});
        }
        // Top & Bottom borders
        for(int j = 1; j < cols; j++) pacific.push({0, j});
        for (int j = 0; j < cols - 1; j++) atlantic.push({rows - 1, j});
        vector<vector<bool>> pac = bfs(pacific);
        vector<vector<bool>> atl = bfs(atlantic);
        vector<vector<int>> ans;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (pac[i][j] && atl[i][j]) {
                    ans.push_back({i, j});
                }
            }
        }
        return ans;
    }
};
int main() {
    return 0;
}