#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int isSum(vector<int> arr, int x) {
        int sum = 0;
        for (int num : arr) {
            sum += (num + x - 1) / x;
        }
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int x) {
        int n = nums.size();
        int low = 1;
        int high = *max_element(nums.begin(), nums.end());
        while (low <= high) {
            int mid = low + (high - low) / 2;
            int sum = isSum(nums, mid);
            if (sum <= x) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
};
int main() {
    return 0;
}