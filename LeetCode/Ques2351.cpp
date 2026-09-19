#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    char repeatedCharacter(string s) {
        vector<bool> seen(26, 0);
        for(char c : s) {
            if(seen[c-'a']) return c;
            seen[c-'a'] = 1;
        }
        return 'a';
    }
};
int main() {
    return 0;
}