#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n;
    ll d;
    cin>>n>>d;
    vector<pair<ll, ll>> v(n);
    for(int i = 0; i < n; i++) {
        cin>>v[i].first>>v[i].second;
    }
    sort(v.begin(), v.end());

    ll sum = 0;
    ll ans = 0;
    int l = 0;
    for(int r = 0; r < n; r++){
        sum += v[r].second;
        while(v[r].first - v[l].first >= d){
            sum -= v[l].second;
            l++;
        }
        ans = max(ans, sum);
    }
    cout<<ans<<endl;

    return 0;
}