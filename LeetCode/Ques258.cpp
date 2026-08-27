#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int addDigits(int n) {
       while(n>9){
            int sum=0;
            while(n>0){
                int r= n%10;
                sum+= r;
                n/=10;
            }
            n=sum;
        }
        return n;
    }
};
int main() {
    return 0;
}