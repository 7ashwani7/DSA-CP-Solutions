#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        int mx = nums[0], mi = nums[0];
        for (int x : nums) {
            mx = max(mx, x);
            mi = min(mi, x);
        }
        return 1LL * k * (mx - mi);
    }
};
//OR
class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        long long mx = *max_element(nums.begin(), nums.end());
        long long mi = *min_element(nums.begin(), nums.end());
        return 1LL * k * (mx - mi);
    }
};
int main() {
    return 0;
}