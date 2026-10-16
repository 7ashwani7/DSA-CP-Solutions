#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int bulbSwitch(int n) {
        int ans = 0;
        n = sqrt(n);
        for (int i = 1; i <= n; i++) {
            ans++;
        }
        return ans;
    }
};
int main() {
    return 0;
}