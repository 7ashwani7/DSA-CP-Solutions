#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        vector<int> diff(1002, 0);
        for (auto& x : trips) {
            int seats = x[0];
            int start = x[1];
            int last = x[2];
            diff[start] += seats;
            diff[last] -= seats;
        }
        int seats = 0;
        for (int i = 0; i <= 1000; i++) {
            seats += diff[i];
            if (seats > capacity) {
                return false;
            }
        }
        return true;
    }
};
int main() {
    return 0;
}