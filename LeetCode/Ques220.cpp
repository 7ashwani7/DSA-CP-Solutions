#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int v) {
        int n = nums.size();
        set<long long> st;
        int l = 0;
        for (int r = 0; r < n; r++) {
            long long low = (long long)nums[r] - v;
            long long high = (long long)nums[r] + v;
            auto it = st.lower_bound(low);
            if (it != st.end()) {
                long long x = *it;
                if (x <= high) {
                    return true;
                }
            }
            st.insert(nums[r]);
            if (r - l + 1 > k) {
                st.erase(nums[l]);
                l++;
            }
        }
        return false;
    }
};
int main() {
    return 0;
}