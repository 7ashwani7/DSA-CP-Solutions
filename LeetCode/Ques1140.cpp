#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> dp;
    int f(vector<int>& s, int i, int m) {
        int n = s.size()-1;
        if (i == n) return 0;
        if (i + 2 * m >= n) return s[i];
        if (dp[i][m] != -1) return dp[i][m];
        int ans = 0;
        for (int x = 1; x <= 2 * m; x++) {
            if (i + x > n) break;
            int mx = max(m, x);
            int curr = s[i] - f(s, i + x, mx);
            ans = max(ans, curr);
        }
        return dp[i][m] = ans;
    }
    int stoneGameII(vector<int>& piles) {
        int n = piles.size();
        dp.assign(n + 1, vector<int>(n + 1, -1));
        vector<int> suf(n + 1);
        suf[n] = 0;
        for (int i = n - 1; i >= 0; i--) {
            suf[i] = piles[i] + suf[i + 1];
        }
        return f(suf, 0, 1);
    }
};
int main() {
    return 0;
}