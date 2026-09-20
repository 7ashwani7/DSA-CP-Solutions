#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll n , t;
    cin>>n>>t;
    vector<ll> v(n);
    for(int i = 0; i < n; i++) cin>>v[i];
    ll sum = 0;
    ll left = 0;
    ll ans = 0;
     for(int right = 0; right < n; right++){
        sum += v[right];
        while(sum > t){
            sum -= v[left];
            left++;
        }
        ans = max(ans, right - left + 1);
    }
    cout<<ans<<endl;
}