#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a.rbegin(), a.rend());
        long long b = 0, c = 0;
        for (int x : a) {
            long long val = 1LL << x;
            if (b <= c) {
                b += val;
            } else {
                c += val;
            }
        }
        cout << b * c << endl;
    }
    return 0;
}