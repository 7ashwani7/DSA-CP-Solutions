
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        int sum = a + b + c;
        if (sum % 3 != 0) {
            cout << "NO" << endl;
            continue;
        }
        int target = sum / 3;
        if (min({a, b, c}) == target - 1 && max({a, b, c}) == target + 1) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
