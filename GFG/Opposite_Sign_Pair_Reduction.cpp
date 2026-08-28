#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<int> reducePairs(vector<int>& arr) {
        vector<int> ans;

        for (int x : arr) {
            while (!ans.empty() && ans.back() * x < 0) {
                if (abs(ans.back()) < abs(x)) {
                    ans.pop_back();
                } 
                else if (abs(ans.back()) == abs(x)) {
                    ans.pop_back();
                    x = 0; 
                    break;
                } 
                else {
                    x = 0; 
                    break;
                }
            }

            if (x != 0) ans.push_back(x);
        }

        return ans;
    }
};
int main() {
    return 0;
}