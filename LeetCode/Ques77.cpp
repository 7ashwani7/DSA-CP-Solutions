#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> ans;
    void helper(int n, int k, int start, vector<int>& curr) {
        if (curr.size() == k) {
            ans.push_back(curr);
            return;
        }
        for (int i = start; i <= n; i++) {
            curr.push_back(i);
            helper(n, k, i + 1, curr);
            curr.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        ans.clear();
        vector<int> curr;
        helper(n, k, 1, curr);
        return ans;
    }
};
int main() {
    return 0;
}