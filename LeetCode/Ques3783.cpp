#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
//     int reverseNumber(int x) {
//     int rev = 0;
//     while (x != 0) {
//         int digit = x % 10;
//         rev = rev * 10 + digit;
//         x /= 10;
//     }
//     return rev;
// }
//     int mirrorDistance(int n) {
//         return abs(n-reverseNumber(n));
//     }
// };
    int mirrorDistance(int n) {
        string s = to_string(n);
        reverse(s.begin(), s.end());
        return abs(n- stoi(s));
            
    }
};
int main() {
    return 0;
}