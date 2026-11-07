
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << "? " << 1 << " " << n << endl;
        int k;
        if (!(cin >> k) || k == -1) {
            return 0;
        }
        if (k == 0 || k == n) {
            cout << "! NO" << endl;
            continue;
        }
        cout << "? " << 1 << " " << k << endl;
        int c;
        if (!(cin >> c) || c == -1) {
            return 0;
        }
        if (c == k) {
            cout << "! NO" << endl;
        } else {
            cout << "! YES" << endl;
        }
    }
    return 0;
}
