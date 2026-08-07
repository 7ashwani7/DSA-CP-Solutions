#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll MOD = 1e9 + 7;
const ll INV2 = 500000004; // inverse of 2 modulo MOD

ll rangeSum(ll l, ll r) {
    l %= MOD;
    r %= MOD;
    ll cnt = (r - l + 1 + MOD) % MOD;
    ll sum = (l + r) % MOD;

    return (((sum * cnt) % MOD) * INV2) % MOD;
}

int main() {
    ll n;
    cin >> n;

    ll ans = 0;

    for (ll l = 1; l <= n; ) {
        ll q = n / l;
        ll r = n / q;
        ll s = rangeSum(l, r);
        ans = (ans + (q % MOD) * s) % MOD;
        l = r + 1;
    }

    cout << ans << '\n';
}