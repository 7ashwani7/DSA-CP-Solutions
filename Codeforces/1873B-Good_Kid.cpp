#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        int idx = -1;
        int mi = INT_MAX;
        vector<int> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            if(a[i] < mi) {
                mi = a[i];
                idx = i;
            }
        }
        a[idx]++;
        long long ans = 1;
        for(int i = 0; i < n; i++) {
            ans *= a[i];
        }
        cout << ans << endl;
    }
    return 0;
}