#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<int> prefSum(vector<int> &arr) {
        // code here
        int n = arr.size();
        vector<int> ans(n);
        ans[0] = arr[0];
        for(int i = 1; i < n; i++){
            ans[i] = ans[i-1] + arr[i];
        }
        return ans;
    }
};
int main() {
    return 0;
}