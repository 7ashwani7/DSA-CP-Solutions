#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        int n = nums.size();
        vector<int> ans;
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < nums[i].size(); j++) {
                mp[nums[i][j]]++;
            }
        }
        for (auto x : mp) {
            if (x.second == n) {
                ans.push_back(x.first);
            }
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};
int main() {
    return 0;
}