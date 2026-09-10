#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    void printTillN(int n) {
        // code here
        if(n == 0) return;
        printTillN(n-1);
        cout<<n<<" ";
    }
};
int main() {
    return 0;
}