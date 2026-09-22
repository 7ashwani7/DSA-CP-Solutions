#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int perfectSum(vector<int>& arr, int target) {
        // code here
        int n = arr.size();
        vector<vector<int>> dp(n+1, vector<int>(target+1, 0));
        dp[0][0] = 1;
        for(int i = 1; i <= n; i++){
            for(int sum = 0; sum <= target; sum++){
                dp[i][sum] = dp[i-1][sum];
                if(arr[i-1] <= sum){
                    dp[i][sum] = (dp[i][sum] + dp[i-1][sum-arr[i-1]]);
                }
            }
        }
        return dp[n][target];
    }
};
int main() {
    return 0;
}