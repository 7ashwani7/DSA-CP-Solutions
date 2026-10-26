#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> prefixSum;
    int totalSum = 0;

    Solution(vector<int>& w) {
        for (int x : w) {
            totalSum += x;
            prefixSum.push_back(totalSum);
        }
    }

    int pickIndex() {
        int randomNum = (rand() % totalSum) + 1;
        int low = 0;
        int high = prefixSum.size() - 1;
        while (low < high) {
            int mid = low + (high - low) / 2;
            if (prefixSum[mid] >= randomNum) {
                high = mid;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(w);
 * int param_1 = obj->pickIndex();
 */
int main() {
    return 0;
}