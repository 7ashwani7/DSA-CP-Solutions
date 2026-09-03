#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int smallestSubstring(string s) {
        int last0 = -1, last1 = -1, last2 = -1;
        int n = s.size();
        int minLen = n + 1;

        for (int i = 0; i < n; i++) {
            if(s[i] == '0') last0 = i;
            else if(s[i] == '1') last1 = i;
            else if(s[i] == '2') last2 = i;

            if(last0 != -1 && last1 != -1 && last2 != -1) {
                int start = min({last0, last1, last2});
                minLen = min(minLen, i - start + 1);
                if(minLen == 3) return 3;
            }
        }

        return (minLen > n) ? -1 : minLen;
    }
};
int main() {
    return 0;
}