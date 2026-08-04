#include <bits/stdc++.h>
#define ll long long
using namespace std;
int mod = 1e9 + 7;
ll power(ll a, ll b){
    ll ans = 1;
    while(b){
        if(b & 1) ans = (ans * a) % mod;
        a = (a * a) % mod;
        b >>= 1;
    }
    return ans;
}
int main(){
    ll n;
    cin>>n;
    while(n--){
        ll a, b;
        cin>>a>>b;
        cout<<power(a, b)<<endl;
    }
}