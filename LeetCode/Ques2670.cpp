#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> distinctDifferenceArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> suffix(n);
        unordered_set<int> s, p;
        for (int i = n - 1; i >= 0; i--) {
            s.insert(nums[i]);
            suffix[i] = s.size();
        }
        vector<int> diff(n);
        for (int i = 0; i < n; i++) {
            p.insert(nums[i]);
            diff[i] = p.size() - (i + 1 < n ? suffix[i + 1] : 0);
        }
        return diff;
    }
};
int main() {
    return 0;
}