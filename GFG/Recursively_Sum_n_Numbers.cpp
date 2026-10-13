#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int recursiveSum(int n) {
        // Recursively sum from 1 to n and return
        // code here
        if(n == 0) return 0;
        return n + recursiveSum(n - 1);;
    }
};
int main() {
    return 0;
}