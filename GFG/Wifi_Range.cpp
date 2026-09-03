#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    bool wifiRange(string &s, int x) {
        int n = s.size();
        int covered = -1;
        for(int i = 0; i < n; i++) {
            if(s[i] == '1') {
                int left = max(0, i - x);
                if(left > covered + 1) return false;
                covered = i + x;
            }
        }
        return covered >= n - 1;
    }
};
int main() {
    return 0;
}