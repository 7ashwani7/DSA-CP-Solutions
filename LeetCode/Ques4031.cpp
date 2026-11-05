#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> findDisappearedNumbers(vector<int>& nums, int lower, int upper) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        int prev = lower - 1;
        for (int x : nums) {
            if (x < lower || x > upper) {
                continue;
            }
            if (x - prev > 1) {
                ans.push_back({prev + 1, x - 1});
            }
            prev = x;
        }
        if (prev < upper) {
            ans.push_back({prev + 1, upper});
        }
        return ans;
    }
};
// OR 
class Solution {
public:
    vector<vector<int>> findDisappearedNumbers(vector<int>& nums, int lower, int upper) {
        unordered_set<int> st(nums.begin(), nums.end());
        vector<vector<int>> ans;
        int start = -1;
        for (int i = lower; i <= upper; i++) {
            if (!st.count(i)) {
                if(start == -1){ 
                    start = i;
                }
            }
            else {
                if (start != -1) {
                    ans.push_back({start, i - 1});
                    start = -1;
                }
            }
        }
        if (start != -1) {
            ans.push_back({start, upper});
        }
        return ans;
    }
};
int main() {
    return 0;
}