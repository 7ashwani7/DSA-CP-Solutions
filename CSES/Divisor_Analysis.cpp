#include <bits/stdc++.h>
using namespace std;

using ll = long long;

const ll MOD = 1e9 + 7;
const ll MOD2 = MOD - 1;

ll power(ll a, ll b, ll mod) {
    ll res = 1;
    a %= mod;
    while (b) {
        if (b & 1)
            res = res * a % mod;
        a = a * a % mod;
        b >>= 1;
    }
    return res;
}

int main() {
    int n;
    cin >> n;

    ll numDiv = 1;
    ll sumDiv = 1;
    ll prodDiv = 1;

    ll divisorCnt = 1;   // modulo MOD-1

    for (int i = 0; i < n; i++) {
        ll p, k;
        cin >> p >> k;

        // Number of divisors
        numDiv = numDiv * (k + 1) % MOD;

        // Sum of divisors
        ll numerator = (power(p, k + 1, MOD) - 1 + MOD) % MOD;
        ll denominator = power(p - 1, MOD - 2, MOD);
        sumDiv = sumDiv * (numerator * denominator % MOD) % MOD;

        // Product of divisors
        ll exp = k * (k + 1) / 2;
        exp %= MOD2;

        prodDiv = power(prodDiv, k + 1, MOD);
        prodDiv = prodDiv * power(power(p, exp, MOD), divisorCnt, MOD) % MOD;

        divisorCnt = divisorCnt * (k + 1) % MOD2;
    }
    cout << numDiv << " " << sumDiv << " " << prodDiv << "\n";

    return 0;
}