#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<char>> grid;
    int ans = 0;
    bool canPlace(int row , int col , int n){
        for(int i = row-1; i >=0; i--){
            if(grid[i][col] == 'Q') return false;
        }
        for(int i = row-1 , j = col-1; i >= 0 && j >= 0; i-- , j--){
            if(grid[i][j] == 'Q') return false;
        }
        for(int i = row-1 , j = col+1; i >= 0 && j < n; i-- , j++){
            if(grid[i][j] == 'Q') return false;
        }
        return true;
    }
    void f(int row , int n){
        if(row == n){
            ans++;
            return;
        }
        for(int col = 0; col < n; col++){
            if(canPlace(row , col , n)){
                grid[row][col] = 'Q';
                f(row+1 , n);
                grid[row][col] = '.';
            }
        }
    }
    int totalNQueens(int n) {
        grid.clear();
        grid.resize(n , vector<char> (n , '.'));
        f(0 , n);
        return ans;
        
    }
};
int main() {
    return 0;
}