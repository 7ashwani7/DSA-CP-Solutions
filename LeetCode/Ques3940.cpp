#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
        int n = nums.size();
        if (n <= k) return nums;
        int idx = 0;
        for (int x : nums) {
            if (idx < k || x != nums[idx - k]) {
                nums[idx++] = x;
            }
        }
        nums.resize(idx);
        return nums;
    }
};
int main() {
    return 0;
}