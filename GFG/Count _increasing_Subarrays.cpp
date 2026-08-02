#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int countIncreasing(vector<int>& arr) {
        // code here.
         int n = arr.size();
        int len = 1, ans = 0;

        for(int i = 1; i < n; i++){
            if(arr[i] > arr[i-1]){
                len++;
            } else {
                ans += (len * (len - 1)) / 2;
                len = 1;
            }
        }
        ans += (len * (len - 1)) / 2;

        return ans;
        
    }
};
int main() {
    return 0;
}
