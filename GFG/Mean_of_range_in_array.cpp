#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<int> findMean(vector<int> &arr, vector<vector<int>> &queries) {
        // code here
        int n = arr.size();
        int m = queries.size();
        vector<int> ans(m);
        for(int i=1; i<n; i++){
            arr[i]=arr[i]+arr[i-1];
        }
        for(int i=0; i<m; i++){
            int k=queries[i][0];
            int j=queries[i][1];
            int sum= (arr[j]-arr[k-1]);
            
            ans[i]=sum/(j-k+1);
        }
        return ans;
    }
};
int main() {
    return 0;
}