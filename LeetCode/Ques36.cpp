#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isSafe(vector<vector<char>> &board, int r, int c) {
        char ch = board[r][c];
        for(int i = 0; i < 9; i++){
            if(i != c && board[r][i] == ch) return false;
        }
        for(int i = 0; i < 9; i++){
            if(i != r && board[i][c] == ch) return false;
        }
        int x = (r / 3) * 3;
        int y = (c / 3) * 3;
        for(int i = x; i < x + 3; i++){
            for(int j = y; j < y + 3; j++){
                if((i != r || j != c) && board[i][j] == ch) return false;
            }
        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i = 0; i < 9; i++) {
            for(int j = 0; j < 9; j++) {
                if(board[i][j] == '.') continue;
                if(!isSafe(board, i, j)) return false;
            }
        }
        return true;
    }
};
int main() {
    return 0;
}