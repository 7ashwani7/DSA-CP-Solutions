#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int longestUniqueSubstr(string &s) {
        // code here
        int n = s.size();
        int left = 0;
        int ans = 0;
        vector<int> last(256, -1);
        for(int right = 0; right < n; right++){
            if(last[s[right]] >= left) left = last[s[right]] + 1;
            last[s[right]] = right;
            ans = max(ans, right-left+1);
        }
        return ans;
    }
};

int main() {
    return 0;
}