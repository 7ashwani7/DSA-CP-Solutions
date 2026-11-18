#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> score(n + 1, 0);
        for (auto t : trust) {
            score[t[0]]--;
            score[t[1]]++;
        }
        for (int i = 1; i <= n; i++) {
            if (score[i] == n - 1) {
                return i;
            }
        }
        return -1;
    }
};
// OR
class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> inDegree(n + 1, 0);
        vector<int> outDegree(n + 1, 0);

        for (auto& x : trust) {
            outDegree[x[0]]++;
            inDegree[x[1]]++;
        }
        for (int i = 1; i <= n; i++) {
            if (inDegree[i] == n - 1 && outDegree[i] == 0) {
                return i;
            }
        }
        return -1;
    }
};
int main() {
    return 0;
}