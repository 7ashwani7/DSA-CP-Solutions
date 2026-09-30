#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int sumOfSeries(int n) {
        // code here
        long long sum = 1LL * n * (n + 1) / 2;
        return sum * sum;
    }
};
int main() {
    return 0;
}