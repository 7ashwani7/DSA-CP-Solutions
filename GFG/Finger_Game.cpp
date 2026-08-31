#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int findFinger(int n) {
        // code here
        int mod = n % 8;
        if(mod == 1) return 1;
        else if(mod == 0 || mod == 2) return 2;
        else if(mod == 3 || mod == 7) return 3;
        else if(mod == 4 || mod == 6) return 4;
        else return 5;
    }
};
int main() {
    return 0;
}