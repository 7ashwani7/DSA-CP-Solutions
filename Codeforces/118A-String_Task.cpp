#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;

    string ans = "";

    for (char c : s) {
        c = tolower(c);
        if (c == 'a' || c == 'o' || c == 'y' || c == 'e' || c == 'u' || c == 'i') {
            continue;
        }
        ans += '.';
        ans += c;
    }
    cout<<ans<<endl;

    return 0;
}