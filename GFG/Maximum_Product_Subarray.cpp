#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int maxProduct(vector<int> &arr) {
        // code here
        int n = arr.size();
        int mx = arr[0];
        int mi = arr[0];
        int ans = arr[0];
        for(int i = 1; i < n; i++){
            if(arr[i] < 0){
                swap(mx, mi);
            }        
            mx = max(arr[i], mx * arr[i]);
            mi = min(arr[i], mi * arr[i]);
            ans = max(ans, mx);
        }
        return ans;
    }
};
int main() {
    return 0;
}