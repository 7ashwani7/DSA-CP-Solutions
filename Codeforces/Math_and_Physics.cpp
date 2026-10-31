#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<ll> a(n);
        ll sum = 0;
        bool flag = false;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
            if (i > 0 && i < n - 1 && a[i] >= 2) {
                flag = true;
            }
        }
        if (flag) {
            cout << sum - 1 <<endl;
        } 
        else {
            if (a[0] < 2 && a[n - 1] < 2) {
                cout << -1 << endl;
            } 
            else {
                cout << sum - (n - 1) << endl;
            }
        }
    }
    return 0;
}