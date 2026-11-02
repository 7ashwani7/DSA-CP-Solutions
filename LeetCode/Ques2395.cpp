#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> s;
        for(int i = 0; i < n-1; i++){
            int sum = nums[i] + nums[i+1];
            if(!s.insert(sum).second) return true;
        }
        return false;
    }
};
int main() {
    return 0;
}