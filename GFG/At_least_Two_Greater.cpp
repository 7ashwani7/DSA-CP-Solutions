#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<int> findElements(vector<int> arr) {
        // Your code goes here
        int n = arr.size();
        sort(arr.begin(), arr.end());
        vector<int> ans(arr.begin(), arr.end()-2);
        return ans;
        
    }
};
int main() {
    return 0;
}