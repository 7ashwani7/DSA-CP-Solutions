#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a, b, c;
        cin >> a >> b >> c;
        cout << ((abs(a - b)) + 2 * c - 1) / (2 * c) << endl;
    }
    return 0;
}