#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        int cc = 0;  
        for(int r = 0; r < rows; r++){
            for(int c = 0; c < cols; c++){
                // Water cell
                if(grid[r][c] == '0') continue;
                // New island found
                cc++;
                grid[r][c] = '0';    
                queue<pair<int,int>> qu;
                qu.push({r, c});
                while(!qu.empty()) {
                    auto curr = qu.front();
                    qu.pop();
                    int currRow = curr.first;
                    int currCol = curr.second;
                    // Check Up
                    if(currRow - 1 >= 0 && grid[currRow - 1][currCol] == '1'){
                        qu.push({currRow - 1, currCol});
                        grid[currRow - 1][currCol] = '0';
                    }
                    // Check Down
                    if(currRow + 1 < rows && grid[currRow + 1][currCol] == '1'){
                        qu.push({currRow + 1, currCol});
                        grid[currRow + 1][currCol] = '0';
                    }
                    // Check Left
                    if(currCol - 1 >= 0 && grid[currRow][currCol - 1] == '1'){
                        qu.push({currRow, currCol - 1});
                        grid[currRow][currCol - 1] = '0';
                    }
                    // Check Right
                    if(currCol + 1 < cols && grid[currRow][currCol + 1] == '1'){
                        qu.push({currRow, currCol + 1});
                        grid[currRow][currCol + 1] = '0';
                    }
                }
            }
        }
        return cc;
    }
};
int main() {
    return 0;
}