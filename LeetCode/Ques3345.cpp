#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool check(int n , int t){
        long long p = 1;
        while(n > 0){
            int r = n % 10;
            if(r % t == 0) return true;
            p *= r;
            n /= 10;
        }
        return (p % t == 0) ? true : false;
    }
    int smallestNumber(int n, int t) {
        int ans = 0;
        int num = n;
        while(true){
            if(check(num , t)){
                ans = num;
                break;
            }
            num++;
        }
        return ans;
    }
};
int main() {
    return 0;
}