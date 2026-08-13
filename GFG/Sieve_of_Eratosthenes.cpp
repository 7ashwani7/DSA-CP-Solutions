#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<int> sieve(int n) {
        // code here
        vector<int> ans;
        vector<bool> prime(n+1 , 1);
        prime[0] = prime[1] = 0;
        for(int i = 2; i*i <=n; i++){
            if(prime[i] == 1){
                for(int j = i * i; j <= n; j += i){
                    prime[j] = 0;
                }
            }
        }
        for(int i = 2; i <= n; i++){
            if(prime[i] == 1) ans.push_back(i);
        }
        return ans;
    }
};
int main() {
    return 0;
}