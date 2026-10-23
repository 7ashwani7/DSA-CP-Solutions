#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        int n = s.size();
        string ans = "";
        int count = 0;
        for (int i = n - 1; i >= 0; i--) {
            if (s[i] == '-') continue;
            ans += toupper(s[i]);
            count++;
            if (count == k) {
                ans += '-';
                count = 0;
            }
        }
        if (!ans.empty() && ans.back() == '-') {
            ans.pop_back();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

int main() {
    return 0;
}