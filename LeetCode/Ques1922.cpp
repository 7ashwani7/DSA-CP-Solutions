#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    const int MOD = 1e9 + 7;
    long long modPow(long long a, long long b){
        long long ans = 1;
        while(b){
            if(b & 1) ans = ans * a % MOD;
            a = a * a % MOD;
            b >>= 1;
        }
        return ans;
    }
    int countGoodNumbers(long long n) {
        return (modPow(5, (n + 1) / 2) * modPow(4, n / 2)) % MOD;
    }
};
int main() {
    return 0;
}