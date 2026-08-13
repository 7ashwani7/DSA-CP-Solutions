#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int powMod(int x, int n, int M) {
        // code here
        long long ans = 1;
        long long a = x % M;
        while(n > 0){
            if(n & 1) ans = (ans * a) % M;
            a = (a * a) % M;
            n >>= 1;
        }
        return ans;
    }
};
int main() {
    return 0;
}