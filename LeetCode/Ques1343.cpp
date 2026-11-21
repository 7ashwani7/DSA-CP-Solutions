#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int t) {
        int n = arr.size();
        int sum = 0;
        for (int i = 0; i < k; i++) {
            sum += arr[i];
        }
        int count = 0;
        if (sum >= 1LL * k * t) {
            count++;
        }
        for (int i = k; i < n; i++) {
            sum += arr[i] - arr[i - k];
            if (sum >= 1LL * k * t) {
                count++;
            }
        }
        return count;
    }
};
int main() {
    return 0;
}