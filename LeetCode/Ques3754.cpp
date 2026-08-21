#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    long long sumAndMultiply(int n) {
        long long sum = 0, num = 0, rev = 0;
        while(n>0){
            int r = n%10;
            if(r != 0){
                sum += r;
                num = r + num * 10;
            }
            n /= 10;
        }
        while(num > 0){
            rev = rev * 10 + num % 10;
            num /= 10;
        }
        return rev * sum;
    }
};
int main() {
    return 0;
}
