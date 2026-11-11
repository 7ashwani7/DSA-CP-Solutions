#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> first, last, freq;
        for (int i = 0; i < n; i++) {
            if (!first.count(nums[i])) {
                first[nums[i]] = i;
            }
            last[nums[i]] = i;
            freq[nums[i]]++;
        }
        int ans = 0;
        for (auto& entry : freq) {
            int val = entry.first;
            int f = entry.second;
            if (last[val] - first[val] + 1 == f) {
                ans++;
            }
        }
        return ans;
    }
};
int main() {
    return 0;
}