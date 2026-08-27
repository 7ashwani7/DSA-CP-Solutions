#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<int> getMinMax(vector<int> &arr) {
        // code here
        int mx= *max_element(arr.begin(), arr.end());
        int mi= *min_element(arr.begin(), arr.end());
        vector<int> v(2);
        v[0]= mi;
        v[1]= mx;
        return v;
    }
};
int main() {
    return 0;
}