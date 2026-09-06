#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int digitSum(int n){
        int sum = 0;
        while(n>0){
            int r = n%10;
            sum+=r;
            n = n/10;
        }
        return sum;
    }
    int countEven(int num) {
        int count = 0;
        for(int i=1; i<=num; i++){
            int sum = digitSum(i);
            if(sum % 2 == 0) count++;
        }
        return count;

    }
};
int main() {
    return 0;
}