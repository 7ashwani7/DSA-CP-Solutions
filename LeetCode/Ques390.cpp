#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int f(int n, int head, int step, bool leftToRight) {
        if (n == 1) {
            return head;
        }
        if (leftToRight || n % 2 != 0) {
            head += step;
        }
        n /= 2;
        step *= 2;
        leftToRight = !leftToRight;
        return f(n, head, step, leftToRight);
    }
    int lastRemaining(int n) { return f(n, 1, 1, true); }
};
int main() {
    return 0;
}