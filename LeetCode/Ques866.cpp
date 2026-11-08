#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPrime(int n) {
        if (n < 2) {
            return false;
        }
        if (n % 2 == 0) {
            return n == 2;
        }
        for (int i = 3; i * i <= n; i += 2) {
            if (n % i == 0) {
                return false;
            }
        }
        return true;
    }
    int makePalindrome(int x) {
        int ans = x;
        x /= 10;
        while (x > 0) {
            ans = ans * 10 + x % 10;
            x /= 10;
        }
        return ans;
    }
    int primePalindrome(int n) {
        if (n <= 11) {
            for (int i = n; i <= 11; i++) {
                if (isPrime(i)) {
                    return i;
                }
            }
        }
        int x = 10;
        while (true) {
            int num = makePalindrome(x);
            if (num >= n && isPrime(num)) {
                return num;
            }
            x++;
        }
    }
};
int main() {
    return 0;
}