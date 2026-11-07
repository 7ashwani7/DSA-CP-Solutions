#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int n = s.size();
        string ans = "";
        int left = 0;
        int count = 0;
        int len = INT_MAX;
        for (int right = 0; right < n; right++) {
            if (s[right] == '1') {
                count++;
            }
            while (count > k) {
                if (s[left] == '1') {
                    count--;
                }
                left++;
            }
            while (left <= right && s[left] == '0') {
                left++;
            }
            if (count == k) {
                int currLen = right - left + 1;
                string curr = s.substr(left, currLen);
                if (currLen < len) {
                    len = currLen;
                    ans = curr;
                } else if (currLen == len) {
                    ans = min(ans, curr);
                }
            }
        }
        return ans;
    }
};
int main() {
    return 0;
}