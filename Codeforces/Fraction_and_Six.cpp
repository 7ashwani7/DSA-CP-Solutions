
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        string a, b;
        cin>>a>>b;
        if (n - m != 3) {
            cout<<"NO"<<endl;
            continue;
        }
        vector<int> freq(26, 0);
        for (char ch : a) {
            freq[ch - 'a']++;
        }

        for (char ch : b) {
            freq[ch - 'a']--;
        }
        bool possible = true;
        for (int i = 0; i < 26; i++) {
            char ch = 'a' + i;
            if (ch == 's' || ch == 'i' || ch == 'x') {
                if (freq[i] != 1) {
                    possible = false;
                    break;
                }
            } else {
                if (freq[i] != 0) {
                    possible = false;
                    break;
                }
            }
        }
        cout<<(possible ? "YES" : "NO")<<endl;
    }
    return 0;
}
