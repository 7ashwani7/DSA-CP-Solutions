#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int kthFactor(int n, int k) {
        int count = 0;
        int i = 1;
        while (count < k && i <= n) {
            if (n % i == 0) {
                count++;
            }
            i++;
        }
        if (count == k) {
            return i - 1;
        }
        return -1;
    }
};
int main() {
    return 0;
}