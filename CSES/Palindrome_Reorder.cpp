#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;

    vector<int> freq(26, 0);

    for(char c : s) freq[c - 'A']++;

    int odd = 0;
    int mid = -1;
    for(int i = 0; i < 26; i++){
        if(freq[i] % 2){
            odd++;
            mid = i;
        }
    }
    if(odd > 1 || (s.size() % 2 == 0 && odd == 1)){
        cout << "NO SOLUTION";
        return 0;
    }
    string left = "";
    for(int i = 0; i < 26; i++){
        left += string(freq[i] / 2, 'A' + i);
    }
    string right = left;
    reverse(right.begin(), right.end());
    cout<<left;
    if(mid != -1) cout<<char('A' + mid);
    cout<<right<<endl;

    return 0;
}