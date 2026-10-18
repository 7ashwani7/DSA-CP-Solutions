#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int trailingZeroes(int n) {
        // code here
        int count = 0;
        int div = 5;
        while (true) {
            if(n / div == 0) break;
            count += n / div;
            div *= 5;
        }
        return count;
    }
};
int main() {
    return 0;
}