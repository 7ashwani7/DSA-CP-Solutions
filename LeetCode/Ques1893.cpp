#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
        vector<int> diff(52, 0);
        for (auto& x : ranges) {
            int start = x[0];
            int end = x[1];
            diff[start]++;
            diff[end + 1]--;
        }
        int count = 0;
        for (int i = 1; i <= 50; i++) {
            count += diff[i];
            if (i >= left && i <= right && count == 0) {
                return false;
            }
        }
        return true;
    }
};
int main() {
    return 0;
}