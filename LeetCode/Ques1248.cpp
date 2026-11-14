#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        int count = 0;
        int left = 0;
        int ans = 0;
        int even = 0;
        for (int right = 0; right < n; right++) {
            if (nums[right] % 2 != 0) {
                count++;
                even = 0;
            }
            while (count == k) {
                if (nums[left] % 2 != 0){
                    count--;
                }
                left++;
                even++;
            }
            ans += even;
        }
        return ans;
    }
};
int main() {
    return 0;
}