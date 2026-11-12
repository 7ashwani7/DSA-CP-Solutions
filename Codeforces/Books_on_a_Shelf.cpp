#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        vector<int> left, mid, right;
        int k = 0;
        for (int i = 0; i < n; ) {
            int j = i;
            while (j < n && a[i] == a[j]) {
                j++;
            }
            int freq = j - i;
            left.push_back(a[i]);
            k++;
            if (freq >= 2) {
                right.push_back(a[i]);
                k++;
            }
            for (int x = 2; x < freq; x++) {
                mid.push_back(a[i]);
            }
            i = j;
        }
        reverse(right.begin(), right.end());
        cout << k << endl;
        for (int x : left) cout << x << " ";
        for (int x : mid) cout << x << " ";
        for (int x : right) cout << x << " ";
        cout << endl;
    }
    return 0;
}