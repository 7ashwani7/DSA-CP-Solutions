#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void  helper(vector<int> &nums, vector<int> ans,   vector<vector<int>>& finalAns, int idx){
      if(idx==nums.size()){
        finalAns.push_back(ans);
        return;
      }   
        helper(nums, ans, finalAns, idx+1);
        ans.push_back(nums[idx]);
        helper(nums, ans, finalAns, idx+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> ans;
        vector<vector<int>> finalAns;
        helper(nums, ans, finalAns, 0);
        return finalAns;
        
    }
};
// OR 
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
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> curr;
        helper(nums, curr, 0);
        return ans;
    }
};
int main() {
    return 0;
}