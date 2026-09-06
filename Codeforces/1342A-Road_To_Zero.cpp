#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long x, y, a, b;
        cin >> x >> y;
        cin >> a >> b;
        long long ans;
        if (b < 2 * a) {
            long long common = min(x, y);
            long long remaining = max(x, y) - common;
            ans = common * b + remaining * a;
        }
        else {
            ans = (x + y) * a;
        }
        cout << ans << endl;
    }
    return 0;
}