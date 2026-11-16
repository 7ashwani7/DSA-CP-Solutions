#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MOD = 1e9 + 7;
ll power(ll base, ll exp) {
    ll ans = 1;
    base %= MOD;
    while (exp > 0) {
        if (exp & 1) ans = (ans * base) % MOD;
        base = (base * base) % MOD;
        exp >>= 1;
    }
    return ans;
}
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<ll> a(n);
        for(auto &x : a) cin >> x;
        sort(a.rbegin(), a.rend());
        ll ans = 1;
        for(int i = 0; i < n; i++){
            if (i + 1 < n && a[i] == a[i + 1]) break;
            ans = (ans + power(a[i] - 1, i + 1)) % MOD;
        }
        cout<<ans<<endl;
    }
    return 0;
}