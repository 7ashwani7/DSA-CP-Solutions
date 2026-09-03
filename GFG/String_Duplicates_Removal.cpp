#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    string removeDuplicates(string &s) {
        string ans = "";
        unordered_set<char> st;
        
        for (auto &x : s) {
            if (!st.count(x)) {
                ans += x;
                st.insert(x);
            }
        }
        
        return ans;
    }
};
int main() {
    return 0;
}