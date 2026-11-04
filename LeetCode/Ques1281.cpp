#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    using ll = long long;
    int subtractProductAndSum(int n) {
        ll sum = 0;
        ll product = 1;
        while(n > 0){
            ll r = n % 10;
            sum += r;
            product *= r;
            n /= 10;
        } 
        return (product - sum);
    }
};
int main() {
    return 0;
}