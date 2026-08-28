#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int getOddOccurrence(vector<int>& arr) {
        // code here
        int ans = 0;
        for(int x : arr){
            ans ^= x;
        }
        return ans;
    }
};
int main() {
    return 0;
}