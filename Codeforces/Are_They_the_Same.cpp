
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        ll k;
        cin >> n >> k;
        ll target_parity = k % 2;
        int count_a = 0, count_b = 0;
        for (int i = 0; i < n; i++) {
            ll x;
            cin >> x;
            if (x % 2 == target_parity) {
                count_a++;
            }
        }
        for (int i = 0; i < n; i++) {
            ll x;
            cin >> x;
            if (x % 2 == target_parity) {
                count_b++;
            }
        }
        if (count_a <= count_b) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
