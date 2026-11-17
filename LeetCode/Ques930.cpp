#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int g) {
        int n = nums.size();
        unordered_map<int, int> mp;
        mp[0] = 1;
        long long sum = 0;
        int ans = 0;
        for (int i = 0; i < n; i++) {
            sum += nums[i];
            ans += mp[sum - g];
            mp[sum]++;
        }
        return ans;
    }
};
// OR 
class Solution {
public:
    int atMost(vector<int>& nums, int g) {
        if (g < 0) return 0;
        int left = 0, sum = 0, count = 0;
        for (int right = 0; right < nums.size(); right++) {
            sum += nums[right];
            while (sum > g) {
                sum -= nums[left++];
            }
            count += right - left + 1;
        }
        return count;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return atMost(nums, goal) - atMost(nums, goal - 1);
    }
};
int main() {
    return 0;
}