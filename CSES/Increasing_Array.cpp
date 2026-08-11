#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(int i = 0; i < n; i++){
        cin>>v[i];
    }
    ll ans = 0;
    for(int i = 1; i < n; i++){
        while(v[i] < v[i-1]){
            v[i]++;
            ans++;
        } 
    }
    cout<<ans<<endl;
}