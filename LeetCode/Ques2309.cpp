#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string greatestLetter(string s) {
        unordered_set<char> st(s.begin(), s.end());
        for(char ch = 'Z'; ch >= 'A'; ch--) {
            if(st.count(ch) && st.count(ch + 32)) {
                return string(1, ch);
            }
        }
        return "";
    }
};
// OR 
class Solution {
public:
    string greatestLetter(string s) {
        unordered_set<char> st(s.begin(), s.end());
        for(char ch = 'Z'; ch >= 'A'; ch--) {
            if(st.count(ch) && st.count(tolower(ch))) {
                return string(1, ch);
            }
        }
        return "";
    }
};
int main() {
    return 0;
}