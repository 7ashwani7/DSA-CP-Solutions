#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        // code here
      // reverse(arr.begin(), arr.end());
      int n= arr.size();
      vector<int> v(n);
      for(int i=0; i<n; i++){
          v[i]=arr[n-1-i];
      }
      for(int i=0; i<n; i++){
          arr[i] =v[i];
      }
    }
};
int main() {
    return 0;
}