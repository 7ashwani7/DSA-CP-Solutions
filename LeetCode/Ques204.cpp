#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void fS(vector<bool>& S){
        int n = S.size()-1;
        for(int i=2; i<=sqrt(n); i++){
            for(int j=i*2; j<=n; j+=i){
                S[j]=0;
            }
        }
    }
    int countPrimes(int n) {
       if(n<=2) return 0;
       n=n-1;
       int count=0;
       vector<bool> S(n+1,1);
       fS(S);
       S[0]=0;
       S[1]=0;
       for(int i=2; i<=n; i++){
        if(S[i]==1) count++;
       }
       return count;
    }
};
int main() {
    return 0;
}