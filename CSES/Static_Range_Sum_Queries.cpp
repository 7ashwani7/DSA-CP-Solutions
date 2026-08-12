#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ll n , q;
    cin>>n>>q;
    vector<ll> v(n);
    for(int i = 0; i < n; i++){
        cin>>v[i];
        if(i > 0) v[i] += v[i-1];
    }
    while(q--){
        int l, r;
        cin>>l>>r;
        l--;
        r--;
        if(l == 0) cout<<v[r]<<endl;
        else cout<<v[r]-v[l-1]<<endl;
    }
    return 0;
}