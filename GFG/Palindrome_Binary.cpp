#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    bool isBinaryPalindrome(int n) {
        // code here
        int original = n;
        int rev = 0;

        while (n > 0) {
            rev = (rev << 1) | (n & 1); 
            n >>= 1; 
        }

        return original == rev;
    }
};
int main() {
    return 0;
}