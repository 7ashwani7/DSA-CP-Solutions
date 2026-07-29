#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    const long long mod = 1000000007;
    vector<long long> fact;
    vector<long long> infact;
    long long power(long long a , long long b){
        long long ans = 1;
        while(b > 0){
            if(b & 1) ans = (ans * a) % mod;
            a = (a * a) % mod;
            b >>= 1;
        }
        return ans;
    }
    long long nCr(int n , int r){
        if(r < 0 || r > n) return 0;
        return (((fact[n] * infact[r]) % mod )* infact[n-r]) % mod;
    }
    int countValidSequences(int n, int k) {
        if(n < k) return 0;
        fact.assign(n+1,1);
        infact.assign(n+1,1);
        for(int i = 1; i <= n; i++){
            fact[i] = (i * fact[i-1]) % mod;
        }
        infact[n] = power(fact[n], mod-2);
        for(int i = n-1; i >= 0; i--){
            infact[i] = (infact[i+1] * (i+1)) % mod;
        }
        long long total = nCr(n-1 , k-1);
        long long odd = 0;
        if((n-k) % 2 == 0){
            int m = (n-k) / 2;
            odd = nCr(m+k-1 , k-1);
        }
        return (total - odd + mod) % mod;
    }
};
int main() {
    return 0;
}