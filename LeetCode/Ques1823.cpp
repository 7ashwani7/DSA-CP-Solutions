#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findTheWinner(int n, int k) {
        int winner = 0;
        for (int i = 2; i <= n; i++) {
            winner = (winner + k) % i;
        }
        return winner + 1;
    }
};
// RECURSIVE APPROACH
class Solution {
public:
    int findTheWinner(int n, int k) {
        if(n == 0) return 1;
        return (findTheWinner(n - 1, k) + k - 1) % n + 1;
    }
};
int main() {
    return 0;
}