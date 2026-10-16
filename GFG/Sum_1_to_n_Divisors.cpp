#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long sumOfDivisors(long long n) {
        long long ans = 0;
        for (long long i = 1; i <= n; i++) {
            ans += i * (n / i);
        }
        return ans;
    }
};
int main() {
    return 0;
}
