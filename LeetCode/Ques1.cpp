#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int> &nums, int target) {
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[j] == target - nums[i]) {
                    return {i, j};
                }
            }
        }
        
        return {};
    }
};
// OR 
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        int n = nums.size();
        unordered_map<int, int> m;
        for(int i=0; i<n; i++){
            int rem = target - nums[i];
            if(m.find(rem) != m.end()){
                ans.push_back(m[rem]);
                ans.push_back(i);
            }
            else{
                m[nums[i]] = i;
            }
        }
        return ans;
    }
};
int main() {
    return 0;
}