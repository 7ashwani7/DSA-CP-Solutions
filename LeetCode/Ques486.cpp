#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> dp;
    int f(vector<int> &arr , int l , int r){
        if(l == r) return arr[l];
        if(dp[l][r] != -1) return dp[l][r];
        int left = arr[l] - f(arr, l+1 , r);
        int right = arr[r] - f(arr , l , r-1);
        return dp[l][r] = max(left , right);
    }
    bool predictTheWinner(vector<int>& nums) {
        int n = nums.size();
        dp.assign(n, vector<int>(n, -1));
        return f(nums, 0 , n-1) >= 0;
    }
};
int main() {
    return 0;
}