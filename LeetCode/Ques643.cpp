#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        double sum = 0;
        for(int i = 0; i < k; i++){
            sum += nums[i];
        }
        double ans = sum;
        for(int i = k; i < n; i++){
            sum -= nums[i-k];
            sum += nums[i];
            ans = max(ans, sum);
        }
        return (ans / (k * 1.0));
    }
};
int main() {
    return 0;
}