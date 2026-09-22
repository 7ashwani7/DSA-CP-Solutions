#include <bits/stdc++.h>
using namespace std;

int main() {
    string g, h, p;
    cin >> g >> h >> p;

    string required = g + h;

    sort(required.begin(), required.end());
    sort(p.begin(), p.end());

    if (required == p) cout << "YES";
    else cout << "NO";
    return 0;
}