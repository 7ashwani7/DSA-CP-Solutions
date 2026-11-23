#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countTriplets(vector<int>& arr) {
        int n = arr.size();
        unordered_map<int, int> freq, sum;
        int xr = 0;
        int ans = 0;
        freq[0] = 1;
        for (int i = 0; i < n; i++) {
            xr ^= arr[i];
            ans += freq[xr] * i - sum[xr];
            freq[xr]++;
            sum[xr] += i + 1;
        }
        return ans;
    }
};
int main() {
    return 0;
}