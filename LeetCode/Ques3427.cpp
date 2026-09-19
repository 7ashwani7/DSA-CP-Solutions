#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int subarraySum(vector<int>& nums) {
        int n = nums.size();
        vector<int> prefix(n+1);
        for(int i = 0; i < n; i++) {
            prefix[i + 1] = prefix[i] + nums[i];
        }
        int ans = 0;
        for(int i = 0; i < n; i++) {
            int start = max(0, i-nums[i]);

            ans += prefix[i + 1]-prefix[start];
        }

        return ans;
    }
};
int main() {
    return 0;
}