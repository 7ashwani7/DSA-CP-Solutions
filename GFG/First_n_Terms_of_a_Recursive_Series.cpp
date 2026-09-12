#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int f(int n) {
        if(n == 0) return 0;
        if(n == 1) return 1;
        int a = f(n - 2);
        int b = f(n - 1);
        return a * a - b;
    }
    vector<int> gfSeries(int n) {
        // code here
        vector<int> ans(n);
        for(int i = 0; i < n; i++){
            ans[i] = f(i);
        }
        return ans;
    }
};
int main() {
    return 0;
}