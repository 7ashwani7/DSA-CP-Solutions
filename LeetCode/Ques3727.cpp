#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            nums[i] = nums[i] * nums[i];
        }
        sort(nums.begin(), nums.end());
        long long sum = 0;
        for (int i = 0; i < n / 2; i++) {
            sum += nums[n - 1 - i] - nums[i];
        }
        if (n % 2 == 1) {
            sum += nums[n / 2];
        }
        return sum;
    }
};
int main() {
    return 0;
}