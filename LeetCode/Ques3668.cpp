#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        int n = order.size();
        
        vector<int> p(n + 1, 0);
        for (int x : friends) {
            p[x] = 1;
        }
        
        vector<int> ans;
        for (int x : order) {
            if (p[x]) {
                ans.push_back(x);
            }
        }
        
        return ans;
    }
};
// OR
class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        unordered_set<int> s(friends.begin(), friends.end());
        
        vector<int> ans;
        for (int x : order) {
            if (s.count(x)) {
                ans.push_back(x);
            }
        }
        return ans;
    }
};
int main() {
    return 0;
}