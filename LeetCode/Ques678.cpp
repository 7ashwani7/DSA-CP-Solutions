#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool checkValidString(string s) {
        int mi = 0;
        int mx = 0;
        for (char c : s) {
            if (c == '(') {
                mi++;
                mx++;
            } else if (c == ')') {
                mi--;
                mx--;
            } else {
                mi--;
                mx++;
            }
            // mi = max(mi, 0);
            if (mi < 0) mi = 0;
            if (mx < 0) return false;
        }
        return mi == 0;
    }
};
int main() {
    return 0;
}