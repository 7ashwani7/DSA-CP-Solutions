#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0 || (x % 10 == 0 && x != 0)) return false;

        int rev = 0;

        while (x > rev) {
            rev = rev * 10 + (x % 10);
            x /= 10;
        }

        return (x == rev) || (x == rev / 10);
    }

    bool isPalinArray(vector<int> &arr) {
        for (int num : arr) {
            if (!isPalindrome(num)) return false;
        }
        return true;
    }
};
int main() {
    return 0;
}