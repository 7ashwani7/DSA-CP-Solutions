#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<int> frequencyCount(vector<int>& arr) {
        // code here
        int n = arr.size();
        vector<int> ans(n, 0);
    
        for(int i = 0; i < n; i++) {
            if(arr[i] >= 1 && arr[i] <= n) {
                ans[arr[i] - 1]++;
            }
        }
    
        return ans;
    }
};
int main() {
    return 0;
}
