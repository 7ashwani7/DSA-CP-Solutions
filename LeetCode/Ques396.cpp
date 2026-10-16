#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    using ll = long long;
    int maxRotateFunction(vector<int>& nums) {
        int n = nums.size();
        ll sum = 0;
        ll f = 0;
        for (int i = 0; i < n; i++) {
            sum += nums[i];
            f += 1LL * i * nums[i];
        }
        ll ans = f;
        for (int k = 1; k < n; k++) {
            f = f + sum - 1LL * n * nums[n - k];
            ans = max(ans, f);
        }
        return int(ans);
    }
};
int main() {
    return 0;
}