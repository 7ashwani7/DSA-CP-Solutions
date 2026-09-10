#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> dp;
    int f(vector<int> &arr , int i){
        int n = arr.size();
        if(i >= n) return 0;
        if(dp[i] != INT_MIN) return dp[i];
        int sum = 0;
        int ans = INT_MIN;
        for(int k = 0; k < 3 && i + k < n; k++){
            sum += arr[i + k];
            ans = max(ans, sum - f(arr, i + k + 1));
        }
        return dp[i] = ans;
    }
    string stoneGameIII(vector<int>& stone) {
        int n = stone.size();
        dp.assign(n , INT_MIN);
        int s = f(stone, 0);
        if(s > 0) return "Alice";
        else if(s < 0) return "Bob";
        else return "Tie";
    }
};
// OR
class Solution {
public:
    string stoneGameIII(vector<int>& stone) {
        int n = stone.size();
        vector<int> dp(n + 3, 0);
        for(int i = n - 1; i >= 0; i--){
            int take = 0;
            dp[i] = INT_MIN;
            for(int k = 0; k < 3 && i + k < n; k++){
                take += stone[i + k];
                dp[i] = max(dp[i], take - dp[i + k + 1]);
            }
        }
        if(dp[0] > 0) return "Alice";
        if(dp[0] < 0) return "Bob";
        return "Tie";
    }
};
int main() {
    return 0;
}