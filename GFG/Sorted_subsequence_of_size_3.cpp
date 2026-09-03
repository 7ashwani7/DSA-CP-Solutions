#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<int> find3Numbers(vector<int> &arr) {
        // Code here
        int n = arr.size();
        
        vector<int> leftMin(n), rightMax(n);

        leftMin[0] = -1;
        int mn = arr[0];
        for(int i = 1; i < n; i++){
            if(arr[i] > mn) leftMin[i] = mn;
            else leftMin[i] = -1;
            mn = min(mn, arr[i]);
        }

        rightMax[n-1] = -1;
        int mx = arr[n-1];
        for(int i = n-2; i >= 0; i--){
            if(arr[i] < mx) rightMax[i] = mx;
            else rightMax[i] = -1;
            mx = max(mx, arr[i]);
        }

        for(int i = 0; i < n; i++){
            if(leftMin[i] != -1 && rightMax[i] != -1){
                return {leftMin[i], arr[i], rightMax[i]};
            }
        }

        return {};
    }
};
int main() {
    return 0;
}