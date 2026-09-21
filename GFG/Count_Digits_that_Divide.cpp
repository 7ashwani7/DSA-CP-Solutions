#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    // Function to count the number of digits in n that evenly divide n
    int evenlyDivides(int n) {
        // code here
        string s = to_string(n);
        int count = 0;
        for(char ch : s){
            int x = ch - '0';
            if(x == 0) continue;
            if(n % x == 0) count++;
        }
        return count;
    }
};
int main() {
    return 0;
}