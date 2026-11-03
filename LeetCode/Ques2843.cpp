#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int count = 0;
        for (int n = low; n <= high; n++) {
            if (n >= 10 && n <= 99) {
                if (n / 10 == n % 10) {
                    count++;
                }
            } else if (n >= 1000 && n <= 9999) {
                int sum1 = n / 1000 + (n / 100) % 10;
                int sum2 = (n / 10) % 10 + n % 10;
                if (sum1 == sum2) {
                    count++;
                }
            }
        }
        return count;
    }
};
int main() {
    return 0;
}