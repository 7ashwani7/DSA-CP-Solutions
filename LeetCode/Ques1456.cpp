#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool vowel(char c) {
        return ((c == 'a') || (c == 'e') || (c == 'i') || (c == 'o') ||
                (c == 'u'));
    }
    int maxVowels(string s, int k) {
        int n = s.size();
        int count = 0;
        for (int i = 0; i < k; i++) {
            if (vowel(s[i])) {
                count++;
            }
        }
        int ans = count;
        for (int i = k; i < n; i++) {
            if (vowel(s[i - k])) {
                count--;
            }
            if (vowel(s[i])) {
                count++;
            }
            ans = max(ans, count);
        }
        return ans;
    }
};
int main() {
    return 0;
}