#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(), piles.end());
        int n = piles.size();
        int i = n - 2;
        int ans = 0;
        for (int j = 0; j < n / 3; j++) {
            ans += piles[i];
            i -= 2;
        }
        return ans;
    }
};
int main() {
    return 0;
}