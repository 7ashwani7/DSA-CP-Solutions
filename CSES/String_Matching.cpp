#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;

    int n = s.size();
    int m = t.size();

    // LPS array
    vector<int> lps(m, 0);

    for (int i = 1, len = 0; i < m; ) {
        if (t[i] == t[len]) {
            lps[i] = ++len;
            i++;
        }
        else if (len > 0) {
            len = lps[len - 1];
        }
        else {
            lps[i] = 0;
            i++;
        }
    }

    // KMP search
    int count = 0;

    for (int i = 0, j = 0; i < n; ) {

        if (s[i] == t[j]) {
            i++;
            j++;
        }

        if (j == m) {
            count++;

            // Important: allows overlapping matches
            j = lps[j - 1];
        }
        else if (i < n && s[i] != t[j]) {

            if (j > 0)
                j = lps[j - 1];
            else
                i++;
        }
    }

    cout << count << '\n';

    return 0;
}