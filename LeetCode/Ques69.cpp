#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int mySqrt(int x) {
        int i=0;
        int j=x;
        while(i<=j){
            long long m=i+(j-i)/2;
            long long y= (long long)x;
            if(m*m==y) return m;
            else if(m*m>y) j=m-1;
            else i=m+1;

        }
        return j;
        
    }
};
int main() {
    return 0;
}