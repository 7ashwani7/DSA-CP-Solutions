#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int josephus(int n, int k) {
        // code here
        if(n == 0) return 1;
        return (josephus(n - 1, k) + k - 1) % n + 1;
    }
};
int main() {
    return 0;
}