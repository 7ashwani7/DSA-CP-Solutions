#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        vector<int> diff(101, 0);
        for (auto& x : logs) {
            int birth = x[0];
            int death = x[1];
            diff[birth - 1950]++;
            diff[death - 1950]--;
        }
        int count = 0;
        int maxPop = 0;
        int ans = 1950;
        for (int i = 0; i <= 100; i++) {
            count += diff[i];
            if (count > maxPop) {
                maxPop = count;
                ans = 1950 + i;
            }
        }
        return ans;
    }
};
int main() {
    return 0;
}