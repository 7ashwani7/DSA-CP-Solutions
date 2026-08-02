#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int derangeCount(int n) {
        // code here
        if (n == 1) return 0;
        if (n == 2) return 1;

        int prev2 = 0; // D(1)
        int prev1 = 1; // D(2)

        for (int i = 3; i <= n; i++) {
            int curr = (i - 1) * (prev1 + prev2);
            prev2 = prev1;
            prev1 = curr;
        }

        return prev1;
    }
};
// Recursive approach (not efficient for large n)
class Solution {
public:
    int derangeCount(int n) {
        // Base cases
        if (n == 1) return 0;
        if (n == 2) return 1;

        // Recurrence
        return (n - 1) * (derangeCount(n - 1) + derangeCount(n - 2));
    }
};
int main() {
    return 0;
}