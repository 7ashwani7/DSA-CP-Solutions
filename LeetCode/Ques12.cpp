#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string intToRoman(int n) {
      int v[]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
      string c[]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};    
      string s="";
      int i=0;
      while(n>0){
        int count = n/v[i];
        while(count>0){
            s+=c[i];
            count--;
        }
        n%=v[i];
        i++;
      }

      return s;
    }
};
int main() {
    return 0;
}