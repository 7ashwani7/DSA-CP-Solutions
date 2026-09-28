#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int left = 0;
    int right = n - 1;
    int sereja = 0;
    int dima = 0;
    bool turn = true;
    while (left <= right) {
        int card;
        if (a[left] > a[right]) {
            card = a[left];
            left++;
        }
        else {
            card = a[right];
            right--;
        }
        if (turn) sereja += card;
        else dima += card;
        turn = !turn;
    }
    cout << sereja << " " << dima << endl;
    return 0;
}