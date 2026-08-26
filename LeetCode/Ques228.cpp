#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        int n = nums.size();
        vector<string> ans;
        if (n == 0) return ans;
        
        int start = 0, end = 0;
        for (int i = 0; i < n - 1; i++) {
            if ((long long)nums[i + 1] - nums[i] == 1) {
                end++; 
            } else {
                if (start == end) {
                    ans.push_back(to_string(nums[start]));
                } else {
                    ans.push_back(to_string(nums[start]) + "->" + to_string(nums[end]));
                }
                start = i + 1; 
                end = i + 1;  
            }
        } 
        if (start == end) {
            ans.push_back(to_string(nums[start]));
        } else {
            ans.push_back(to_string(nums[start]) + "->" + to_string(nums[end]));
        }
        
        return ans;
    }
};
int main() {
    return 0;
}