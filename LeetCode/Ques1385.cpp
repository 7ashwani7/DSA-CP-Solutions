#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int n = arr1.size();
        int m = arr2.size();
        int ans = 0;
        sort(arr2.begin(), arr2.end());
        for (int i = 0; i < n; i++) {
            int low = 0;
            int high = m - 1;
            bool valid = true;
            while (low <= high) {
                int mid = low + (high - low) / 2;
                if (abs(arr2[mid] - arr1[i]) <= d) {
                    valid = false;
                    break;
                } else if (arr2[mid] < arr1[i]) {
                    low = mid + 1;
                } else {
                    high = mid - 1;
                }
            }
            if (valid) ans++;
        }
        return ans;
    }
};
int main() {
    return 0;
}