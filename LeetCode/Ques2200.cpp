#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        int n = nums.size();
        vector<int> diff(n + 1, 0);
        for (int j = 0; j < n; j++) {
            if (nums[j] == key) {
                int left = max(0, j - k);
                int right = min(n - 1, j + k);
                diff[left]++;
                diff[right + 1]--;
            }
        }
        vector<int> ans;
        int active = 0;
        for (int i = 0; i < n; i++) {
            active += diff[i];
            if (active > 0) {
                ans.push_back(i);
            }
        }
        return ans;
    }
};
int main() {
    return 0;
}