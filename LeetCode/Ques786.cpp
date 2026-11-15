#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        int n = arr.size();
        using t = tuple<double, int, int>;
        priority_queue<t, vector<t>, greater<t>> pq;
        for (int i = 0; i < n - 1; i++) {
            pq.push({(double)arr[i] / arr[n - 1], i, n - 1});
        }
        while (k--) {
            auto [fraction, i, j] = pq.top();
            pq.pop();
            if (k == 0) {
                return {arr[i], arr[j]};
            }
            if (j - 1 > i) {
                pq.push({(double)arr[i] / arr[j - 1], i, j - 1});
            }
        }
        return {};
    }
};
int main() {
    return 0;
}