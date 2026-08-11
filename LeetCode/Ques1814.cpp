#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int rev(int n) {
        int r = 0;
        while(n > 0){
            r = r * 10 + (n % 10);
            n /= 10;
        }
        return r;
    }
    int countNicePairs(vector<int>& nums) {
        int n = nums.size();
        long long count = 0;
        const int MOD = 1000000007;
        unordered_map<int, int> m;
        for(int i=0; i<n; i++){
            nums[i] -= rev(nums[i]);
        }
        for(int i=0; i<n; i++){
            if(m.find(nums[i]) != m.end()){
                count = count % MOD;
                count += m[nums[i]];
                m[nums[i]]++;
            }
            else{
                m[nums[i]]++;
            }
        }
        return count % MOD;
    }
};
int main() {
    return 0;
}