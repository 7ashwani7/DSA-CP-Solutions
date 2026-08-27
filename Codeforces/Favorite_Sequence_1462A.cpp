#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<ll> b(n), a(n);

        for (int i = 0; i < n; i++)
            cin >> b[i];

        int mid = (n + 1) / 2;

        int j = 0;

        for (int i = 0; i < n; i += 2)
            a[i] = b[j++];

        for (int i = n - 1; i >= 1; i -= 2)
            a[i] = b[j++];

        for (ll x : a)
            cout << x << " ";

        cout << endl;
    }

    return 0;
}