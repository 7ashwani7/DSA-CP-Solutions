#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        unordered_map<int, int> mp;
        for(int i = 0; i < n; i++){
            mp[nums[i]]++;
            if(mp[nums[i]] == 2){
                ans ^= nums[i];
            }
        }
        return ans;
    }
};
int main() {
    return 0;
}