#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}
int main() {
    int t;
    cin>>t;
    while(t--){
        int l, a, b;
        cin >> l >> a >> b;

        int x = l / gcd(l, a);
        int y = l / gcd(l, b);

        cout << gcd(x, y) << endl;
    }
    return 0;
}