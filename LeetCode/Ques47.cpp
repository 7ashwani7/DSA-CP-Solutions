#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> ans;
    void f(vector<int>& nums, int i){
        if(i == nums.size()-1){
            ans.push_back(nums);
            return;
        }
        unordered_set<int> s;
        for(int idx = i; idx < nums.size(); idx++){
            if(s.count(nums[idx])) continue;
            s.insert(nums[idx]);
            swap(nums[idx] , nums[i]);
            f(nums , i+1);
            swap(nums[idx] , nums[i]);

        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        f(nums, 0);
        return ans;
    }
};
int main() {
    return 0;
}