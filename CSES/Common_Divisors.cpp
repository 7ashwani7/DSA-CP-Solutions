#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll n;
    cin>>n;
    vector<ll> v(n);
    ll mx = 0;
    for(int i = 0; i < n; i++){
        cin>>v[i];
        mx = max(mx , v[i]);
    }
    vector<int> freq(mx + 1, 0);
    for(int x : v) freq[x]++;
    for(int g = mx; g >= 1; g--){
        int cnt = 0;
        for(int j = g; j <= mx; j += g){
            cnt += freq[j];
            if(cnt >= 2){
                cout<<g<<endl;
                return 0;
            }
        }
    }
    return 0;
}