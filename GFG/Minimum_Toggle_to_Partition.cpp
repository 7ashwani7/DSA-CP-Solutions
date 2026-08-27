#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int minToggle(vector<int>& arr) {
        // code here
        int count0 = 0;
        for(int x : arr) {
            if(x == 0)
                count0++;
        }
        int ans = count0;
        int left1 = 0;
        int right0 = count0;
        for(int x : arr) {
            if(x == 1) left1++;
            else right0--;
            ans = min(ans, left1 + right0);
        }
        return ans;
    }
};
int main() {
    return 0;
}