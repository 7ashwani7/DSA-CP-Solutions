#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int getLPSLength(string &s) {
        // code here
        int n = s.size();
        vector<int> lps(n, 0);
        for(int i = 1, j = 0; i < n;){
            if(s[i] == s[j]){
                lps[i] = j + 1;
                i++;
                j++;
            }
            else if(j > 0){
                j = lps[j - 1];
            }
            else{
                i++;
            }
        }
        return lps[n - 1];
    }
};
int main() {
    return 0;
}