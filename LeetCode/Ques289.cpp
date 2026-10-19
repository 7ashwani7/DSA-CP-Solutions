#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int m = board.size();
        int n = board[0].size();
        int row[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
        int col[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                int live = 0;
                for (int d = 0; d < 8; d++) {
                    int r = i + row[d];
                    int c = j + col[d];
                    if (r >= 0 && r < m && c >= 0 && c < n && abs(board[r][c]) == 1) {
                        live++;
                    }
                }
                if (board[i][j] == 1) {
                    if (live < 2 || live > 3) {
                        board[i][j] = -1;
                    }
                } else {
                    if (live == 3) {
                        board[i][j] = 2;
                    }
                }
            }
        }
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (board[i][j] == -1) {
                    board[i][j] = 0;
                } else if (board[i][j] == 2) {
                    board[i][j] = 1;
                }
            }
        }
    }
};

int main() {
    return 0;
}