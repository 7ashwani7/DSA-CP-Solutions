#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    string s;
    cin>>s;
    ll len = 1;
    ll ans = 1;
    for(int i = 1; i < s.size(); i++){
        if(s[i] == s[i-1]) len++;
        else len = 1;
        ans = max(ans, len);
    }
    cout<<ans<<endl;
}