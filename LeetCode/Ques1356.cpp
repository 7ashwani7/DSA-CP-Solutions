#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    // __builtin_popcount(n)
    //  OR
    // int countBits(int n) {
    //     int count = 0;
    //     while(n > 0) {
    //         count += n & 1;
    //         n >>= 1;
    //     }
    //     return count;
    // }
    bool comparator(int a, int b) {
        int bitsA = __builtin_popcount(a);
        int bitsB = __builtin_popcount(b);
        if (bitsA == bitsB) {
            return a < b;
        }
        return bitsA < bitsB;
    }
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(), arr.end(),
             [&](int a, int b) { return comparator(a, b); });
        return arr;
    }
};

int main() {
    return 0;
}