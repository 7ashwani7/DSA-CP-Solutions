#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int takeCharacters(string s, int k) {
        int n = s.size();
        vector<int> freq(3, 0);
        for (char c : s) {
            freq[c - 'a']++;
        }
        if (freq[0] < k || freq[1] < k || freq[2] < k) {
            return -1;
        }
        vector<int> count(3, 0);
        int i = 0;
        int len = 0;
        for (int j = 0; j < n; j++) {
            count[s[j] - 'a']++;
            while (count[0] > freq[0] - k || count[1] > freq[1] - k ||
                   count[2] > freq[2] - k) {
                count[s[i] - 'a']--;
                i++;
            }
            len = max(len, j - i + 1);
        }
        return n - len;
    }
};
int main() {
    return 0;
}