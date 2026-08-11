#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int firstOccurence(string& txt, string& pat) {
        int n = txt.size();
        int m = pat.size();

        for(int i = 0; i <= n - m; i++) {
            int j;
            for(j = 0; j < m; j++) {
                if(txt[i + j] != pat[j]) break;
            }
            if(j == m) return i;
        }

        return -1;
    }
};
int main() {
    return 0;
}