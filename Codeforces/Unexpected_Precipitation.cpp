#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<ll> x(n), y(n);
        for (int i = 0; i < n; i++) {
            cin >> x[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> y[i];
        }
        ll dpSunny = 0, dpAubrey = 0;
        for (int i = n - 1; i >= 0; i--) {
            ll delta = x[i] - y[i];
            ll newSunny = max(delta + dpSunny, dpAubrey);
            ll newAubrey = min(-delta + dpAubrey, dpSunny);
            dpSunny = newSunny;
            dpAubrey = newAubrey;
        }
        if (dpSunny > 0) {
            cout << "Sunny" << endl;
        }
        else if (dpSunny < 0) {
            cout << "Aubrey" << endl    ;
        }
        else {
            cout << "Draw" << endl;
        }
    }
    return 0;
}