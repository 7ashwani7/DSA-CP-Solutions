#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        if(s.size() <= 10) cout<<s<<endl;
        else{
            int len = s.size()-2;
            string ans = "";
            ans += s[0];
            ans += to_string(len);
            ans += s[len+1];
            cout<<ans<<endl;

        }
    }
    return 0;
}