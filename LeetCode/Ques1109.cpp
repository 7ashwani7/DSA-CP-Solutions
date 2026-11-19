#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int> diff(n + 1, 0);
        for (auto &x : bookings) {
            int start = x[0];
            int last = x[1];
            int seats = x[2];
            diff[start - 1] += seats;
            diff[last] -= seats;
        }

        vector<int> ans(n);
        int seats = 0;
        for (int i = 0; i < n; i++) {
            seats += diff[i];
            ans[i] = seats;
        }
        return ans;
    }
};
int main() {
    return 0;
}