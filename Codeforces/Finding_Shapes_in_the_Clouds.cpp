#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        if (n % 2 != 0) {
            cout << "NO" << endl;
            continue;
        }
        bool flag = false;
        for (int i = 1; i < n; i++) {
            if (s[i] == s[i - 1]) {
                flag = true;
                break;
            }
        }
        if (flag) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}