#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int n = nums.size();
        if (n < 2) {
            return 0;
        }
        int mn = *min_element(nums.begin(), nums.end());
        int mx = *max_element(nums.begin(), nums.end());
        if (mn == mx) {
            return 0;
        }
        long long gap = (mx - mn + n - 2) / (n - 1);
        int buckets = (mx - mn) / gap + 1;
        vector<int> bmin(buckets, INT_MAX);
        vector<int> bmax(buckets, INT_MIN);
        vector<bool> used(buckets, false);
        for (int x : nums) {
            int index = (x - mn) / gap;
            bmin[index] = min(bmin[index], x);
            bmax[index] = max(bmax[index], x);
            used[index] = true;
        }
        int ans = 0;
        int prev = mn;
        for (int i = 0; i < buckets; i++) {
            if (!used[i]) {
                continue;
            }
            ans = max(ans, bmin[i] - prev);
            prev = bmax[i];
        }
        return ans;
    }
};
int main() {
    return 0;
}