#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int n = nums.size();
        int left = 0;
        int right = -1;
        int mx = nums[0];
        int mi = nums[n - 1];
        for (int i = 1; i < n; i++) {
            mx = max(mx, nums[i]);
            if (nums[i] < mx) {
                right = i;
            }
            int j = n - 1 - i;
            mi = min(mi, nums[j]);
            if (nums[j] > mi) {
                left = j;
            }
        }
        return (right == -1) ? 0 : right - left + 1;
    }
};
// OR
class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int n = nums.size();
        vector<int> arr = nums;
        sort(arr.begin(), arr.end());
        if(arr == nums) return 0;
        int left = 0;
        int right = n-1;
        for(int i = 0; i < n; i++){
            if(arr[i] == nums[i]){
                left++;
            }
            else{
                break;
            }
        }
        for(int i = n-1; i >= 0; i--){
            if(arr[i] == nums[i]){
                right--;
            }
            else{
                break;
            }
        }
        return right - left + 1;
    }
};
int main() {
    return 0;
}