#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += cardPoints[i];
        }
        int len = n - k;
        int curr = 0;
        for (int i = 0; i < len; i++) {
            curr += cardPoints[i];
        }
        int ans = sum - curr;
        for (int i = len; i < n; i++) {
            curr += cardPoints[i] - cardPoints[i - len];
            ans = max(ans, sum - curr);
        }
        return ans;
    }
};
int main() {
    return 0;
}