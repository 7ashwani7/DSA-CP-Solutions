#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    pair<int, int> countOddEven(vector<int> &arr) {
        // code here
        int even = 0;
        int odd = 0;
        for(int x : arr){
            if(x % 2 == 0){
                even++;
            }
            else {
                odd++;
            }
        }
        return {odd, even};
    }
};
int main() {
    return 0;
}