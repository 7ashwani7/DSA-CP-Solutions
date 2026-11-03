#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int sumAndProduct(int n){
        int sum = 0;
        int prod = 1;
        while(n > 0){
            sum += (n % 10);
            prod *= (n % 10);
            n /= 10;
        }
        return sum + prod;
    }
    bool checkDivisibility(int n) {
        int temp = n;
        int ans = sumAndProduct(n);
        if(temp % ans == 0) return true;
        return false;
    }
};
int main() {
    return 0;
}