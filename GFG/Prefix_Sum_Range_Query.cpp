#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<int> rangeSumQueries(vector<int>& arr, vector<vector<int>>& q) {
        // code here
        int n = arr.size();
        int m = q.size();
        vector<int> ans(m);
        for(int i = 1; i < n; i++){
            arr[i] += arr[i - 1];
        }
        for(int i = 0; i < m; i++){
            int l = q[i][0];
            int r = q[i][1];
            int sum = 0;
            if(l == 0) sum = arr[r];
            else sum = arr[r] - arr[l - 1];
            ans[i] = sum;
        }
        return ans;
    }
};
int main() {
    return 0;
}