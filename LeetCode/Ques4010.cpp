#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    long long gcd(long a , long long b){
        if(b == 0) return a;
        return gcd(b , a % b);
    }
    long long ans = 0;
    long long maxPairStrength(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0; i < n; i++){
           for(int j = i+1; j < n; j++){
               long long g  = gcd(nums[i] , nums[j]);
               long long a = 1LL * nums[i] * nums[j] / (g * g);
               ans = max(ans,a);
           }
        }
        return ans;
    }
};
int main() {
    return 0;
}