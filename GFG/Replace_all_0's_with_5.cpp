#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int convertFive(int n) {
        if (n == 0) return 5;

        int res = 0, place = 1;

        while (n > 0) {
            int digit = n % 10;
            if (digit == 0) digit = 5;

            res += digit * place;
            place *= 10;
            n /= 10;
        }

        return res;
    }
};
// OR
class Solution {
  public:
    int convertFive(int n) {
        string s = to_string(n);
        for (char &ch : s) {
            if (ch == '0') ch = '5';
        }
        return stoi(s);
    }
};
int main() {
    return 0;
}