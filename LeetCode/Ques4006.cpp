#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countValidPrefixes(string s) {
        int n = s.size();
        int count = 0;
        int one = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == '1') one++;
            int zero = (i+1)-one;
            if(abs(one - zero) <= 1) count++;
        }
        return count;
    }
};
int main() {
    return 0;
}