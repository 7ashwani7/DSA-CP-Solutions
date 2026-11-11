#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int arr[26][26] = {};
    bool comp(char a, char b) {
        for (int i = 0; i < 26; i++) {
            if (arr[a - 'A'][i] != arr[b - 'A'][i]) {
                return arr[a - 'A'][i] > arr[b - 'A'][i];
            }
        }
        return a < b;
    }
    string rankTeams(vector<string>& votes) {
        int n = votes.size();
        int m = votes[0].size();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                arr[votes[i][j] - 'A'][j]++;
            }
        }
        string ans = votes[0];
        sort(ans.begin(), ans.end(),
             [&](char a, char b) { return comp(a, b); });
        return ans;
    }
};
int main() {
    return 0;
}