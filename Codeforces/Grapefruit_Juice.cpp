
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        ll p;
        cin >> n >> k >> p;
        vector<ll> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a.rbegin(), a.rend());
        vector<ll> prefix(n + 1, 0);
        for (int i = 0; i < n; i++) {
            prefix[i + 1] = prefix[i] + a[i];
        }
        ll ans = 0;
        for (int i = 0; i <= n / k; i++) {
            int remaining = n - (i * k);
            ll joy = (1LL * i * p) + prefix[remaining];
            ans = max(ans, joy);
        }
        cout << ans << endl;
    }
    return 0;
}