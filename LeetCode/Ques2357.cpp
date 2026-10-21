#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int ans = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] == 0){
                 continue;
            }
            if (i == 0 || nums[i] != nums[i - 1]){ 
                ans++;
            }
        }
        return ans;
    }
};
// OR 
class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        unordered_set<int> s(nums.begin(), nums.end());
        if(s.count(0)) return (s.size()-1);
        else return s.size();
    }
};
int main() {
    return 0;
}