#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int one = 0, two = 0, three = 0;
    for (char ch : s) {
        if (ch == '1') one++;
        else if (ch == '2') two++;
        else if (ch == '3') three++;
    }
    bool first = true;
    for (int i = 0; i < one; i++) {
        if (!first) cout << "+";
        cout << "1";
        first = false;
    }
    for (int i = 0; i < two; i++) {
        if (!first) cout << "+";
        cout << "2";
        first = false;
    }
    for (int i = 0; i < three; i++) {
        if (!first) cout << "+";
        cout << "3";
        first = false;
    }
    cout << endl;
    return 0;
}