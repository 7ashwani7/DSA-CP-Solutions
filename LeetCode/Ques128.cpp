#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st(nums.begin(), nums.end());
        int ans = 0;
        for (int x : st) {
            if (st.count(x - 1) == 0) {
                int count = 1;
                while (st.count(x + count)){
                    count++;
                }
                ans = max(ans, count);
            }
        }
        return ans;
    }
};
int main() {
    return 0;
}