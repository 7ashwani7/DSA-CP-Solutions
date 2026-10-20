#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        for (int i = 0; i < n; i++) {
            unordered_set<int> st;
            int dist = 0;
            for (int j = i; j < n; j++) {
                if (st.insert(nums[j]).second) {
                    dist++;
                }
                ans += dist * dist;
            }
        }
        return ans;
    }
};
int main() {
    return 0;
}