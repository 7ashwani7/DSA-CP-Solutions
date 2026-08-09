#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
       int extendedGCD(int a, int b, int &x, int &y) {
        if (b == 0) {
            x = 1;
            y = 0;
            return a;
        }
        int x1, y1;
        int gcd = extendedGCD(b, a % b, x1, y1);
        
        x = y1;
        y = x1 - y1 * (a / b);
        
        return gcd;
       }
       vector<int> gcd(int a, int b) {
        // code here
        vector<int> ans(3);
        int x,y;
        int g = extendedGCD(a, b, x, y);
        ans[0]= g;
        ans[1]= x;
        ans[2]= y;
        
        return ans;  
    }
};
int main() {
    return 0;
}