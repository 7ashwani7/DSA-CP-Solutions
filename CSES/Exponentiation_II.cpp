#include <bits/stdc++.h>
#define ll long long
using namespace std;

const ll MOD = 1e9 + 7;
ll power(ll a, ll b, ll mod){
    ll ans = 1;
    a %= mod;
    while(b){
        if(b & 1) ans = (ans * a) % mod;
        a = (a * a) % mod;
        b >>= 1;
    }
    return ans;
}
int main() {
    int t;
    cin >> t;
    while(t--){
        ll a, b, c;
        cin>>a>>b>>c;
        ll exponent = power(b, c, MOD - 1);
        cout<<power(a, exponent, MOD)<<endl;;
    }
}