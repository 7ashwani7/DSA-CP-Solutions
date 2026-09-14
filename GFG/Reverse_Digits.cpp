#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int reverseDigits(int n) {
        // Code here
        int ans = 0;
        while(n > 0){
            ans = 10 * ans + (n % 10);
            n /= 10;
        }
        return ans;
    }
};
int main() {
    return 0;
}