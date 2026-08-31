#include <bits/stdc++.h>
using namespace std;
// Top-Down (Memoization) DP
class Solution {
public:
    vector<int> dp;
    int ftd(vector<int>& arr, int i) {
        if(i==arr.size()-1) return arr[i];
        if(i==arr.size()-2) return max(arr[i], arr[i + 1]);
        if(dp[i] != -1) return dp[i];
        return dp[i] = max(arr[i] + ftd(arr, i + 2), ftd(arr, i + 1));
    }
    int rob(vector<int>& nums) {
        dp.assign(nums.size(), -1);
        return ftd(nums, 0);
    }
};
// Bottom-Up (Tabulation) DP
class Solution {
public:
    int rob(vector<int>& arr) {
        int n = arr.size();
        if(n==1) return arr[0];
        vector<int> dp(n,0);
        dp[n-1] = arr[n-1];
        dp[n-2] = max(arr[n-2], arr[n-1]);
        for(int i=n-3; i>=0; i--){
            dp[i] = max(arr[i] + dp[i + 2], dp[i + 1]);
        }
        return dp[0];
    }
};
int main() {
    return 0;
}