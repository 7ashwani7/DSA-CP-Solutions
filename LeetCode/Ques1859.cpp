#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string sortSentence(string s) {
        stringstream ss(s);
        string word;
        vector<pair<int, string>> v;
        while (ss >> word) {
            int pos = word.back() - '0';
            word.pop_back();
            v.push_back({pos, word});
        }
        sort(v.begin(), v.end());
        string ans = "";
        for (int i = 0; i < v.size(); i++) {
            if (i > 0) ans += " ";
            ans += v[i].second;
        }
        return ans;
    }
};
int main() {
    return 0;
}