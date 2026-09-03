#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minimumPushes(string word) {
        int n  = word.size();
        int ans = 0;
        if(n <= 8) return n;
        else if(n <= 16) ans = 8 + 2 * (n - 8);
        else if(n <= 24) ans = 24 + 3 * (n - 16);
        else if(n == 25) ans = 48 + 4;
        else ans = 52 + 4;
        return ans;
    }
};
int main() {
    return 0;
}