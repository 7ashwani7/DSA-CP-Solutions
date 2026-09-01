#include <bits/stdc++.h>
using namespace std;
// Bottom-Up (Tabulation) DP
class Solution {
public:
    int minTaps(int n, vector<int>& ranges){
        vector<int> dp(n + 1, INT_MAX);
        dp[0] = 0;
        for(int i = 0; i <= n; i++){
            int start = max(0, i - ranges[i]);
            int end = min(n, i + ranges[i]);
            int ans = INT_MAX;
            for(int j = start; j <= end; j++){
                ans = min(ans, dp[j]);
            }
            if(ans != INT_MAX){
                dp[end] = min(dp[end], ans + 1);
            }
        }
        return dp[n] == INT_MAX ? -1 : dp[n];
    }
};
//Optimal Greedy Solution (O(n))
class Solution {
public:
    int minTaps(int n, vector<int>& ranges){
        vector<int> arr(n + 1, 0);
        for(int i = 0; i <= n; i++){
            int start = max(0, i - ranges[i]);
            int end = min(n, i + ranges[i]);
            arr[start] = max(arr[start], end);
        }
        int t = 0;
        int c = 0;
        int f = 0;
        for(int i = 0; i <= n; i++){
            if(i > f) return -1;
            f = max(f, arr[i]);
            if(i == c){
                if(c == n) break;
                t++;
                c = f;
            }
        }
        return t;
    }
};
int main() {
    return 0;
}