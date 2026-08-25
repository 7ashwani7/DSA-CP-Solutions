#include <bits/stdc++.h>
using namespace std;
// User function Template for C++

class Solution {
  public:
    // Function to find maximum value among the difference of element and index.
    int maxVal(vector<int> &arr) {
        // code here
        int n =arr.size();
        int mx = INT_MIN;
        int mi = INT_MAX;
        for(int i=0; i<n; i++){
            mx= max(mx,(arr[i]-i));
            mi= min(mi,(arr[i]-i));
        }
        return mx-mi;
        
    }
};
int main() {
    return 0;
}