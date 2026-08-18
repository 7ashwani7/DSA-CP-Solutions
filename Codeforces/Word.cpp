#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    int upper = 0;
    for (char c : s) {
        if (isupper(c)) upper++;
    }
    if (upper > s.size() - upper) {
        for (char &c : s) c = toupper(c);
    } 
    else {
        for (char &c : s) c = tolower(c);
    }
    cout<<s<< endl;

    return 0;
}