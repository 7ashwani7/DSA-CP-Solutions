#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    void reverseInGroups(vector<int> &arr, int k) {
        // code here
        int n = arr.size();
        for(int i = 0; i < n; i += k){
            int j = min(i+k, n);
            reverse(arr.begin()+i, arr.begin()+j);
        }
        
    }
};

int main() {
    return 0;
}