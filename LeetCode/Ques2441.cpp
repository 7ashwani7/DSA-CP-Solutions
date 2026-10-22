#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findMaxK(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int i = 0, j = nums.size() - 1;
        while(i < j){
            int sum = nums[i]+ nums[j];
            if(sum == 0) return nums[j];
            else if(sum < 0) i++;
            else j--;
        }
        return -1;
    }
};
int main() {
    return 0;
}