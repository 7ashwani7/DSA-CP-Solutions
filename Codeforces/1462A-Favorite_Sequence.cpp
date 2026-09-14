#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> b(n), a(n);
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        int left = 0;
        int right = n - 1;
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) a[left++] = b[i];
            else a[right--] = b[i];
        }
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}