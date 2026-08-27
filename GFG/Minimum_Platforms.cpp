#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int minPlatform(vector<int>& arr, vector<int>& dep) {
        // code here
        sort(arr.begin(), arr.end());
        sort(dep.begin(), dep.end());
        int i = 0, j = 0;
        int p = 0, maxP = 0;
        int n = arr.size();
        
        while (i < n && j < n) {
            if (arr[i] <= dep[j]) {
                p++; 
                i++;
            } else {
                p--; 
                j++;
            }
            maxP = max(maxP, p);
        }
        
        return maxP;
    }
};
int main() {
    return 0;
}
