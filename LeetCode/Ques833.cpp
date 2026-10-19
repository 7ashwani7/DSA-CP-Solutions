#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string findReplaceString(string s, vector<int>& idx, vector<string>& sr, vector<string>& t) {
        int n = s.size();
        int m = idx.size();
        vector<int> pos(n, -1);
        for (int i = 0; i < m; i++) {
            if (s.substr(idx[i], sr[i].size()) == sr[i]) {
                pos[idx[i]] = i;
            }
        }
        string ans = "";
        int i = 0;
        while (i < n) {
            if (pos[i] != -1) {
                int j = pos[i];
                ans += t[j];
                i += sr[j].size();
            } else {
                ans += s[i];
                i++;
            }
        }
        return ans;
    }
};

int main() {
    return 0;
}