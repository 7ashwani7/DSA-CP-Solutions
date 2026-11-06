#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int i = 0;
        int j = n;
        vector<int> ans(2 * n, 0);
        int idx = 0;
        while(i < n){
            ans[idx++] = nums[i];
            ans[idx++] = nums[j];
            i++;
            j++;
        }
        return ans;
    }
};
int main() {
    return 0;
}