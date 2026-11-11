#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        int mx = INT_MIN;
        int mi = INT_MAX;
        int maxIdx = -1;
        int minIdx = -1;
        for (int i = 0; i < n; i++) {
            if (mx < nums[i]) {
                maxIdx = i;
                mx = nums[i];
            }
            if (mi > nums[i]) {
                minIdx = i;
                mi = nums[i];
            }
        }
        int left = min(minIdx, maxIdx);
        int right = max(minIdx, maxIdx);
        int ans = min({left + 1 + n - right, right + 1, n - left});
        return ans;
    }
};
int main() {
    return 0;
}