#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long k = n / 2;
        long long ans = 8 * k * (k + 1) * (2 * k + 1) / 6;
        cout << ans << endl;
    }
    return 0;
}