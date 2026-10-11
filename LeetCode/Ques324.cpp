#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, 0);
        sort(nums.begin(), nums.end());
        reverse(nums.begin(), nums.end());
        int j = 0;
        for (int i = 1; i < n; i += 2) {
            ans[i] = nums[j];
            j++;
        }
        for (int i = 0; i < n; i += 2) {
            ans[i] = nums[j];
            j++;
        }
        nums = ans;
        return;
    }
};
int main() {
    return 0;
}