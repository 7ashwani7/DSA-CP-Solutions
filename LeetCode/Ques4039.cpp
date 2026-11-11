#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    using ll = long long;
    const ll MOD = 1e9 + 7;
    ll pow(ll a, ll b) {
        ll ans = 1;
        while (b) {
            if (b & 1) {
                ans = ans * a % MOD;
            }
            a = a * a % MOD;
            b >>= 1;
        }
        return ans;
    }
    int sumDecoded(vector<long long>& nums) {
        ll ans = 0;
        for (ll val : nums) {
            int width = val % 10;
            ll d = val / 10;

            ll temp = d;
            int digits = 0;
            while (temp) {
                digits++;
                temp /= 10;
            }
            ll div = 1;
            for (int i = 0; i < digits - width; i++) {
                div *= 10;
            }
            ll x = d / div;
            ll y = d % div;
            ans = (ans + pow(x, y)) % MOD;
        }
        return ans;
    }
};
int main() {
    return 0;
}