#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n = candies.size();
        int mx = *max_element(candies.begin(), candies.end());
        vector<bool> ans(n);
        for (int i = 0; i < n; i++) {
            if (extraCandies + candies[i] >= mx) {
                ans[i] = 1;
            } else {
                ans[i] = 0;
            }
        }
        return ans;
    }
};
int main() {
    return 0;
}