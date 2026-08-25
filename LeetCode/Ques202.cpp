#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isHappy(int n) {
      while(n!=1 && n!=4){
        int sum=0;
        while(n>0){
            int r= n%10;
            sum+= pow(r,2);
            n/=10;
        }
        n=sum;
      }
      return n==1;
        
        
    }
};
int main() {
    return 0;
}