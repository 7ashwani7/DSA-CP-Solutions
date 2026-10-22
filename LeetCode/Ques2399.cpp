#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool checkDistances(string s, vector<int>& distance) {
        int n = s.size();
        vector<int> freq(26, -1);
        for (int i = 0; i < n; i++) {
            int j = s[i] - 'a';
            if (freq[j] == -1) {
                freq[j] = i;
            } else {
                int dist = i - freq[j] - 1;
                if (dist != distance[j]) {
                    return false;
                }
            }
        }
        return true;
    }
};
int main() {
    return 0;
}