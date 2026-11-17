#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int atMost(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> mp;
        int left = 0;
        int diff = 0;
        int ans = 0;
        for (int right = 0; right < n; right++) {
            mp[nums[right]]++;
            if (mp[nums[right]] == 1) {
                diff++;
            }
            while (diff > k) {
                mp[nums[left]]--;
                if (mp[nums[left]] == 0) {
                    diff--;
                }
                left++;
            }
            ans += right - left + 1;
        }
        return ans;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return atMost(nums, k) - atMost(nums, k - 1);
    }
};
// OR
class Solution {
public:
    int atmost(vector<int>& nums, int k) {
        if (k == 0) {
            return 0;
        }
        int freq[20001] = {};
        int left = 0;
        int diff = 0;
        int ans = 0;
        for (int right = 0; right < nums.size(); right++) {
            if (freq[nums[right]]++ == 0) {
                diff++;
            }
            while (diff > k) {
                if (--freq[nums[left]] == 0) {
                    diff--;
                }
                left++;
            }
            ans += right - left + 1;
        }
        return ans;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return atmost(nums, k) - atmost(nums, k - 1);
    }
};
int main() {
    return 0;
}