#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int gcd(int a, int b){
       if(b==0) return a;
       else 
          return gcd(b, a%b);
        
    }
    vector<int> lcmAndGcd(int a, int b) {
        // code here
       vector<int> ans(2);
       int g= gcd(a,b);
       ans[0] =  a*b/g;
       ans[1] = g;
       
       return ans;
    }
};
int main() {
    return 0;
}