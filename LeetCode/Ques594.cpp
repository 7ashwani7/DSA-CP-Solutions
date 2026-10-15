#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int, int> mp;
        int ans = 0;
        for (int x : nums) {
            mp[x]++;
        }
        for (auto x : mp) {
            if (mp.count(x.first + 1)) {
                ans = max(ans, x.second + mp[x.first + 1]);
            }
        }
        return ans;
    }
};
int main() {
    return 0;
}