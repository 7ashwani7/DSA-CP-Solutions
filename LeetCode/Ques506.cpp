#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    typedef pair<int, int> p;
    vector<string> findRelativeRanks(vector<int>& score) {
        int n = score.size();
        vector<string> ans(n);
        priority_queue<p> pq;
        int idx = 0;
        for (auto x : score) {
            pq.push({x, idx++});
        }
        int rank = 1;
        while (pq.size() > 0) {
            int x = pq.top().first;
            int i = pq.top().second;
            pq.pop();
            if (rank == 1) {
                ans[i] = "Gold Medal";
            } else if (rank == 2) {
                ans[i] = "Silver Medal";
            } else if (rank == 3) {
                ans[i] = "Bronze Medal";
            } else {
                ans[i] = to_string(rank);
            }
            rank++;
        }
        return ans;
    }
};
int main() {
    return 0;
}