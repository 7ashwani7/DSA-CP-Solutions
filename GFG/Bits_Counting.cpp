#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<int> countBits(int n) {
        // code here
        vector<int> bits(n + 1);

        for(int i = 1; i <= n; i++){
            bits[i] = bits[i >> 1] + (i & 1);
        }

        return bits;
        
    }
};
int main() {
    return 0;
}