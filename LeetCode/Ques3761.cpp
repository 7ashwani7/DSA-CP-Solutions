#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int reverseNumber(int x) {
        int rev = 0;
        while (x != 0) {
            int digit = x % 10;
            rev = rev * 10 + digit;
            x /= 10;
        }
        return rev;
    }

    int minMirrorPairDistance(vector<int>& nums) {
        unordered_map<int, int> mp;
        int ans = INT_MAX;

        for (int i = 0; i < nums.size(); i++) {
            if (mp.count(nums[i])) {
                ans = min(ans, i - mp[nums[i]]);
            }

            mp[reverseNumber(nums[i])] = i;
        }

        return (ans == INT_MAX) ? -1 : ans;
    }
};
int main() {
    return 0;
}