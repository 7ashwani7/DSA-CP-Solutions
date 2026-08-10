#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool canJump(vector<int>& nums) {
    int maxReach = 0;
        for (int i = 0; i <= maxReach; ++i) {
            maxReach = max(maxReach, i + nums[i]);
            if (maxReach >= nums.size() - 1) return true;
        }
        return false;
    }
};
int main() {
    return 0;
}