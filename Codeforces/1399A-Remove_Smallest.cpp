#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        bool pos = true;
        for (int i = 1; i < n; i++) {
            if (a[i] - a[i - 1] > 1) {
                pos = false;
                break;
            }
        }
        if (pos) cout << "YES" << endl;
        else cout << "NO" <<endl;
    }
    return 0;
}