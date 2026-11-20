#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        int n = arr.size();
        int mi = INT_MAX;
        vector<vector<int>> ans;
        sort(arr.begin(), arr.end());
        for (int i = 1; i < n; i++) {
            mi = min(mi, arr[i] - arr[i - 1]);
        }
        for (int i = 1; i < n; i++) {
            if (arr[i] - arr[i - 1] == mi) {
                ans.push_back({arr[i - 1], arr[i]});
            }
        }
        return ans;
    }
};
int main() {
    return 0;
}