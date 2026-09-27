#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n = s.size();
        vector<int> lps(n, 0);
        for(int i = 1, j = 0; i < n; ){
            if(s[i] == s[j]){
                lps[i] = j + 1;
                i++;
                j++;
            }
            else if(j > 0){
                j = lps[j - 1];
            }
            else {
                i++;
            }
        }
        int len = lps[n - 1];
        return (len > 0 && n % (n - len) == 0);
    }
};
int main() {
    return 0;
}