#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> mergeOverlap(vector<vector<int>>& arr) {
        int n = arr.size();
        if (n <= 1) return arr;

        sort(arr.begin(), arr.end());

        vector<vector<int>> r;

        for (int i = 0; i < n; i++) {
            if (r.empty() || arr[i][0] > r.back()[1]) {
                r.push_back(arr[i]);
            } 
            else {
                r.back()[1] = max(r.back()[1], arr[i][1]);
            }
        }

        return r;
    }
};
int main() {
    return 0;
}