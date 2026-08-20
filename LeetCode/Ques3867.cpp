#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    long long gcd(long long a, long long b){
        if(b == 0) return a;
        return gcd(b , a % b);
    }
    long long gcdSum(vector<int>& nums) {
        int n = nums.size();
        vector<long long> v(n);
        int mx = nums[0];
        for(int i = 0; i < n; i++){
            mx = max(mx , nums[i]);
            v[i] = gcd(nums[i] , mx);
        }
        sort(v.begin(), v.end());
        int i = 0, j = n-1;
        long long sum = 0;
        while(i < j){
            sum += gcd(v[i] , v[j]);
            i++;
            j--;
        }
        return sum;
    }
};
int main() {
    return 0;
}