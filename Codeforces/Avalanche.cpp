#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        ll sum = 0;
        for (int i = 0; i < n; i++) {
            ll a;
            cin >> a;
            if (i % (k + 1) == 0) {
                sum ^= (a & 1);
            }
        }
        if (sum) {
            cout << "Alice" << endl;
        } else {
            cout << "Bob" << endl;
        }
    }
    return 0;
}