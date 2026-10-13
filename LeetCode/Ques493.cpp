#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    using ll = long long;
    ll countPairs(vector<int>& nums, int low, int mid, int high) {
        ll count = 0;
        int j = mid + 1;
        for (int i = low; i <= mid; i++) {
            while (j <= high && nums[i] > 2LL * nums[j]) {
                j++;
            }
            count += j - (mid + 1);
        }
        return count;
    }
    void merge(vector<int>& nums, int low, int mid, int high) {
        vector<int> temp;
        int i = low;
        int j = mid + 1;
        while (i <= mid && j <= high) {
            if (nums[i] <= nums[j]) {
                temp.push_back(nums[i++]);
            } else {
                temp.push_back(nums[j++]);
            }
        }
        while (i <= mid)
            temp.push_back(nums[i++]);

        while (j <= high)
            temp.push_back(nums[j++]);

        for (int k = 0; k < temp.size(); k++) {
            nums[low + k] = temp[k];
        }
    }
    ll mergeSort(vector<int>& nums, int low, int high) {
        if (low >= high)
            return 0;
        int mid = low + (high - low) / 2;
        ll count = 0;
        count += mergeSort(nums, low, mid);
        count += mergeSort(nums, mid + 1, high);
        count += countPairs(nums, low, mid, high);
        merge(nums, low, mid, high);
        return count;
    }
    int reversePairs(vector<int>& nums) {
        return mergeSort(nums, 0, nums.size() - 1);
    }
};
int main() {
    return 0;
}