#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int solve(int n){
        if(n == 0) return 0;
        return max(n,solve(n/2) + solve(n/3) + solve(n/4));
    }
    int maxSum(int n) {
        return solve(n);
    }
};
int main() {
    return 0;
}