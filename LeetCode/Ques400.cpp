#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    using ll = long long;
    int findNthDigit(int n) {
        ll len = 1;
        ll count = 9;
        ll start = 1;
        while (n > len * count) {
            n -= len * count;
            len++;
            count *= 10;
            start *= 10;
        }
        ll num = start + (n - 1) / len;
        int idx = (n - 1) % len;
        string s = to_string(num);
        return s[idx] - '0';
    }
};
int main() {
    return 0;
}