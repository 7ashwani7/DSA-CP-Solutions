
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll a, x, k;
        cin >> a >> x >> k;
        ll low = 0;
        ll high = 30 * (k + 1);
        while (high - low > 1) {
            ll mid = low + (high - low) / 2;
            ll c = min(mid, k);
            ll q = mid - c;
            ll cost = c;
            if (q > 0) {
                cost++;
                if (cost < a + mid * x) {
                    q--;
                }
                ll power = 2;
                ll segments = c + 1;
                while (q > 0 && cost < a + mid * x) {
                    ll take = min(q, segments);
                    if (take > (a + mid * x - cost) / power) {
                        cost = a + mid * x;
                        break;
                    }
                    cost += take * power;
                    q -= take;
                    if (power > LLONG_MAX / 2) {
                        cost = a + mid * x;
                        break;
                    }
                    power *= 2;
                }
            }
            ll sunny = a + mid * x;
            if (cost < sunny) {
                low = mid;
            } else {
                high = mid;
            }
        }
        cout << a + low * x << endl;
    }
    return 0;
}