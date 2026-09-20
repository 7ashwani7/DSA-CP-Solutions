#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s;

    cin >> n;
    cin >> s;

    if(n > 26){ 
        cout << -1 << endl;
        return 0;
    }
    vector<bool> seen(26, false);
    int distinct = 0;
    for(char c : s){
        if(!seen[c - 'a']){
            seen[c - 'a'] = true;
            distinct++;
        }
    }
    cout << n - distinct << endl;

    return 0;
}