#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numSplits(string s) {
        int n = s.size();
        int ans = 0;
        vector<int> left(26, 0), right(26, 0);
        int dl = 0, dr = 0;
        for (auto c : s) {
            if (right[c - 'a'] == 0) dr++;
            right[c - 'a']++;
        }
        for (int i = 0; i < n - 1; i++) {
            if (left[s[i] - 'a'] == 0) dl++;
            left[s[i] - 'a']++;
            right[s[i] - 'a']--;
            if (right[s[i] - 'a'] == 0) dr--;
            if (dl == dr) ans++;
        }
        return ans;
    }
};
// OR 
class Solution {
public:
    int numSplits(string s) {
        int n = s.size();
        int ans = 0;
        unordered_map<char, int> left, right;
        for (char c : s) {
            right[c]++;
        }
        for (int i = 0; i < n - 1; i++) {
            left[s[i]]++;
            right[s[i]]--;
            if (right[s[i]] == 0) {
                right.erase(s[i]);
            }
            if (left.size() == right.size()) {
                ans++;
            }
        }
        return ans;
    }
};
int main() {
    return 0;
}