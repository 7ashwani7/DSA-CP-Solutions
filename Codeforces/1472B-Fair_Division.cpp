#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int one = 0, two = 0;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (x == 1) one++;
            else two++;
        }
        if (one % 2 == 0 && (two % 2 == 0 || one >= 2)) {
            cout << "YES"<<endl;
        } else {
            cout << "NO"<<endl;
        }
    }
    return 0;
}