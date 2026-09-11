#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isGood(vector<int>& nums) {

        int n = nums.size();
        int mx = *max_element(nums.begin(), nums.end());

        if(n != mx + 1) return false;

        unordered_map<int,int> mp;
        for(auto val : nums){
            mp[val]++;
        }
        for(int i = 1; i < mx; i++){
            if(mp[i] != 1)
                return false;
        }
        return mp[mx] == 2;
    }
};
int main() {
    return 0;
}