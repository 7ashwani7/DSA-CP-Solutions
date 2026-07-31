#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int visibleBuildings(vector<int>& arr) {
        // code here
        int n = arr.size();
        int ans = 0;
        int mi = INT_MIN;
        for(int i=0; i<n; i++){
            if(arr[i] >= mi){
                mi = arr[i];
                ans++;
                
            }
        }
        return ans;
    }
};
int main() {
    return 0;
}