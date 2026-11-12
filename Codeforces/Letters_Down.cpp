#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        vector<bool> req(26, false);
        for (int i = 0; i < n / 2; i++) {
            int u = s[i] - 'a';
            int v = s[n - 1 - i] - 'a';
            if (u > v) swap(u, v);
            for (int c = u + 1; c <= v; c++) {
                req[c] = true;
            }
        }
        int ans = 0;
        for (int c = 1; c < 26; c++) {
            if (req[c]) ans++;
        }
        cout << ans << endl;
    }
    return 0;
}