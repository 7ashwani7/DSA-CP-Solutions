#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int digitSum(int n){
        int sum = 0;
        while(n > 0){
            int r = n % 10;
            sum += r;
            n /= 10;
        }
        return sum;
    }
    int largestInteger(int n, int s) {
        if(s == 0) return 0;
        int digit = 9;
        for(int i = 2; i <= n; i++){
            digit = (digit * 10) + 9;
        }
        for(int i = digit; i > (digit / 10); i--){
            if(s == digitSum(i)) return i;
        }
        return -1;
        
    }
};
int main() {
    return 0;
}