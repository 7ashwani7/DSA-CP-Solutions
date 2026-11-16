#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    int t;
    cin>>t;
    while(t--) {
        ll n, k;
        cin>>n>>k;
        string s;
        cin>>s;
        ll c0 = 0;
        for(char c : s){
            if(c == '0') c0++;
        }
        ll c1 = n - c0;
        ll mx = min(n, max(c0, c1) + k);
        ll mi = n - mx;
        ll ans = 1 + (mx * (mx + 1)) / 2 + (mi * (mi + 1)) / 2;
        cout<<ans<<endl;
    }
    return 0;
}