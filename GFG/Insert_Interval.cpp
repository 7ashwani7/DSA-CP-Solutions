#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<vector<int>> insertInterval(vector<vector<int>> &intervals, vector<int> &newInterval) {
        // code here
        vector<vector<int>> ans;
        int n = intervals.size();
        int a = newInterval[0];
        int b = newInterval[1];
        int i = 0;
        while (i < n && intervals[i][1] < a) {
            ans.push_back(intervals[i]);
            i++;
        }
        while (i < n && intervals[i][0] <= b) {
            a = min(a, intervals[i][0]);
            b = max(b, intervals[i][1]);
            i++;
        }
        ans.push_back({a, b});
        while (i < n) {
            ans.push_back(intervals[i]);
            i++;
        }
        return ans;
    }
};
int main() {
    return 0;
}