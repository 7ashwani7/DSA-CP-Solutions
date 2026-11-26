#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> ans;
    void helper(vector<int>& nums, vector<int>& curr,int idx) {
        if (idx == nums.size()) {
            ans.push_back(curr);
            return;
        }
        curr.push_back(nums[idx]);
        helper(nums, curr, idx + 1);
        curr.pop_back();
        helper(nums, curr, idx + 1);
    }
    int subsetXORSum(vector<int>& nums) {
        vector<int> curr;
        helper(nums, curr, 0);
        int sum = 0;
        for(int i = 0; i < ans.size(); i++){
            int temp = 0;
            for(int j = 0; j < ans[i].size(); j++){
                temp ^= ans[i][j];
            }
            sum += temp;
        }
        return sum;
    }
};
// OR 
class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int ans = 0;
        for (int x : nums) {
            ans |= x;
        }
        return ans << (nums.size() - 1);
    }
};
int main() {
    return 0;
}