#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> mp;
        for(int x : nums){
            mp[x]++;
        }
        int ans0 = 0;
        int ans1 = 0;
        for(auto x : mp){
            ans1 += x.second % 2;
            ans0 += x.second / 2;
        }
        return {ans0, ans1};
    }
};
int main() {
    return 0;
}