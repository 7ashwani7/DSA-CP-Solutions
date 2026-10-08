#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        for(char col = 'a'; col <= 'h'; col++) {
            if(col != s[0]) {
                cout << col << s[1] << endl;
            }
        }
        for(char row = '1'; row <= '8'; row++) {
            if(row != s[1]) {
                cout << s[0] << row << endl;
            }
        }
    }
    return 0;
}