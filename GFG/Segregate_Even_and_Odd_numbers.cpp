#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    void segregateEvenOdd(vector<int>& arr) {
        // code here
        sort(arr.begin(), arr.end(), [](int a, int b){
            if (a % 2 == b % 2)
              return a < b;       
            return a % 2 < b % 2; 
        });
       
    }
};
int main() {
    return 0;
}