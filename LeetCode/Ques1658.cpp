#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n = nums.size();
        int sum = 0;
        for (auto& x : nums) {
            sum += x;
        }
        int target = sum - x;
        if (target < 0) return -1;
        int ans = -1;
        int left = 0;
        int curr = 0;
        for (int right = 0; right < n; right++) {
            curr += nums[right];
            while (curr > target) {
                curr -= nums[left];
                left++;
            }
            if (curr == target) {
                ans = max(ans, right - left + 1);
            }
        }
        if (ans == -1) return ans;
        return n - ans;
    }
};
int main() {
    return 0;
}