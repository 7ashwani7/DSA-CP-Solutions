#include <bits/stdc++.h>
using namespace std;

struct Height {
    int feet;
    int inches;
};

// function must return the maximum Height
// return the height in inches
class Solution {
  public:
    int findMax(vector<Height>& arr) {
        int n = arr.size();
        int mx = INT_MIN;

        for(int i = 0; i < n; i++){
            int total = arr[i].feet * 12 + arr[i].inches;
            mx = max(mx, total);
        }

        return mx;
    }
};
int main() {
    return 0;
}