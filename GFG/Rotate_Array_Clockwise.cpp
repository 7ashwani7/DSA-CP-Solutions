#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    void rotateclockwise(vector<int>& arr, int d) {
        // code here
        int n=arr.size();
        d=d%n;
    
        reverse(arr.begin(),arr.begin()+(n-d));
        reverse(arr.begin()+(n-d),arr.end());
        reverse(arr.begin(),arr.end());
    }
};
int main() {
    return 0;
}