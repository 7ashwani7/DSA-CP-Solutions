#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int gcd(int a, int b){
        if(b == 0) return a;
        return gcd(b, a % b);
    }
    int lcm(int a, int b) {
        return (a / gcd(a , b)) * b;
    }
    int maxLength(vector<int>& nums) {
        int n = nums.size();
        int ans = 1;
        for(int i = 0; i < n; i++) {
            long long product = 1;
            int g = 0;
            int l = 1;
            for(int j = i; j < n; j++) {
                g = gcd(g, nums[j]);
                l = lcm(l, nums[j]);
                if(product > 1LL * g * l / nums[j]) {
                    product = 1LL * g * l + 1;
                }
                else {
                    product *= nums[j];
                }
                if(product == 1LL * g * l) {
                    ans = max(ans, j - i + 1);
                }
            }
        }
        return ans;
    }
};
int main() {
    return 0;
}