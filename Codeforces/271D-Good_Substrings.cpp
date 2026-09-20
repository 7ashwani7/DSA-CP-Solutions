#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, good;
    int k;
    cin>>s;
    cin>>good;
    cin>>k;

    int n = s.size();
    unordered_set<unsigned long long> st;

    const unsigned long long base = 911382323;

    for (int i = 0; i < n; i++) {

        int bad = 0;
        unsigned long long hash = 0;

        for (int j = i; j < n; j++) {

            if (good[s[j] - 'a'] == '0') bad++;

            if (bad > k) break;

            hash = hash * base + (s[j] - 'a' + 1);

            st.insert(hash);
        }
    }
    cout<<st.size()<<endl;

    return 0;
}