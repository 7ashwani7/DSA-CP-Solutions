#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<string, int> mp;
        stringstream ss(s);
        string word;

        int i = 0;

        while (ss >> word) {
            if (i == pattern.size()) return false;

            string key1 = string(1, pattern[i]);
            string key2 = "#" + word;

            if (mp[key1] != mp[key2]) return false;

            mp[key1] = mp[key2] = i + 1;
            i++;
        }

        return i == pattern.size();
    }
};
int main() {
    return 0;
}