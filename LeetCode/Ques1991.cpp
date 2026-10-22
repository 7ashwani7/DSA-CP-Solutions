#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n = nums.size();
        long long sum = 0;
        for (int i = 0; i < n; i++) {
            sum += nums[i];
        }
        long long currSum = 0;
        for (int i = 0; i < n; i++) {
            if (currSum == sum - nums[i]) {
                return i;
            }
            currSum += nums[i];
            sum -= nums[i];
        }
        return -1;
    }
};
int main() {
    return 0;
}