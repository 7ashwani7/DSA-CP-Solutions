#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int findElement(vector<int> &arr) {
        int n = arr.size();
        
        vector<int> leftMax(n), rightMin(n);
        leftMax[0] = arr[0];
        for(int i = 1; i < n; i++){
            leftMax[i] = max(leftMax[i-1], arr[i]);
        }
        rightMin[n-1] = arr[n-1];
        for(int i = n-2; i >= 0; i--){
            rightMin[i] = min(rightMin[i+1], arr[i]);
        }
        for(int i = 1; i < n-1; i++){
            if(leftMax[i-1] <= arr[i] && arr[i] <= rightMin[i+1]){
                return arr[i];
            }
        }
        
        return -1;
    }
};
int main() {
    return 0;
}