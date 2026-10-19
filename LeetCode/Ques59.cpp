#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> matrix(n, vector<int>(n));
        int minr = 0, minc = 0;
        int maxr = n - 1, maxc = n - 1;
        int num = 1;
        while (minr <= maxr && minc <= maxc) {
            for (int j = minc; j <= maxc; j++) {
                matrix[minr][j] = num++;
            }
            minr++;
            for (int i = minr; i <= maxr; i++) {
                matrix[i][maxc] = num++;
            }
            maxc--;
            for (int j = maxc; j >= minc && minr <= maxr; j--) {
                matrix[maxr][j] = num++;
            }
            maxr--;
            for (int i = maxr; i >= minr && minc <= maxc; i--) {
                matrix[i][minc] = num++;
            }
            minc++;
        }
        return matrix;
    }
};

int main() {
    return 0;
}