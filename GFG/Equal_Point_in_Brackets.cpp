#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int findIndex(string &s) {
        // code here
        int n = s.size();
        int r = 0, l = 0;
        for(char ch : s) {
            if(ch == ')') r++;
        }
        for(int i=0; i<=n; i++) {
            if(l == r) return i;
            if(i < n) {
                if(s[i] == '(') l++;
                else r--;
            }
        }
        return -1;
    }
};
int main() {
    return 0;
}