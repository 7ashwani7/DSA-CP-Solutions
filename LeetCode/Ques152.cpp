#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int mx = 1;
        int mi = 1;
        int ans = nums[0];
        for (int x : nums) {
            if (x < 0) {
                swap(mx, mi);
            }
            mx = max(x, mx * x);
            mi = min(x, mi * x);
            ans = max(ans, mx);
        }
        return ans;
    }
};
int main() {
    return 0;
}