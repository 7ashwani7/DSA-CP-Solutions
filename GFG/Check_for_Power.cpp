#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPower(int x, int y) {
        double val = log(y) / log(x);
        return abs(val - round(val)) < 1e-9;
    }
};
// OR
class Solution {
public:
    bool isPower(int x, int y) {
        if (y == 1) return true;
        if (x == 1) return (y == 1);

        long long power = 1;

        while (power < y) {
            power *= x;
        }

        return power == y;
    }
};
int main() {
    return 0;
}