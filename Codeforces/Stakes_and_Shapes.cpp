
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y, z;
        cin >> x >> y >> z;
        int n = x + y + z;
        char move;
        if (y >= z) {
            move = 'R';
        } else if (x >= y) {
            move = 'P';
        } else {
            move = 'S';
        }
        cout<<string(n, move)<<endl;
    }
    return 0;
}
