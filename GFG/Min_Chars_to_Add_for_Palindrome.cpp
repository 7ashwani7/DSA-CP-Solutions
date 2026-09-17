#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int minChar(string &s) {
        // code here
        string rev = s;
        reverse(rev.begin(), rev.end());
        string t = s + "#" + rev;
        int n = t.size();
        vector<int> lps(n, 0);
        int i = 1;
        int j = 0;
        while(i < n) {
            if(t[i] == t[j]) {
                lps[i] = j + 1;
                i++;
                j++;
            }
            else if(j > 0) {
                j = lps[j - 1];
            }
            else {
                i++;
            }
        }
        return s.size() - lps[n - 1];
    }
};

int main() {
    return 0;
}