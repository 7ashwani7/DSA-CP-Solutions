#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& g) {
        vector<vector<int>> res;
        unordered_map<int, vector<int>> groups;

        for (int i = 0; i < g.size(); i++) {
            int size = g[i];
            groups[size].push_back(i);

            if (groups[size].size() == size) {
                res.push_back(groups[size]);
                groups[size].clear();
            }
        }

        return res;
    }
};
int main() {
    return 0;
}