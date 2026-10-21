#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        unordered_set<int> s;
        int i = 0, j = n - 1;
        while(i < j){
            s.insert(nums[i] + nums[j]);
            i++;
            j--;
        }
        return s.size();
    }
};
int main() {
    return 0;
}