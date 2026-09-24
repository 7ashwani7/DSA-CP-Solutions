#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int nCr(int n, int r) {
        // code here
        if(r > n) return 0;
        r = min(r, n - r);
        long long ans = 1;
        for(int i = 0; i < r; i++){
            ans = ans * (n - i);
            ans = ans / (i + 1);
        }
        return ans;
    }
};
int main() {
    return 0;
}