#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        unordered_set<int> s(nums.begin(), nums.end());
        int mi = *min_element(nums.begin(), nums.end());
        int mx = *max_element(nums.begin(), nums.end());
        for(int i = mi; i <= mx; i++){
            if(!s.count(i)) ans.push_back(i);
        }
        return ans;
    }
};
int main() {
    return 0;
}