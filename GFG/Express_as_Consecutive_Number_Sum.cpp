#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    bool isSumOfConsecutive(int n) {
        // code here
        return (n & (n - 1)) != 0;
    }
};
int main() {
    return 0;
}