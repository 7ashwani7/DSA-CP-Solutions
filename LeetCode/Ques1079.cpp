#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int solve(vector<int>& freq) {
        int count = 0;
        for (int i = 0; i < 26; i++) {
            if (freq[i] > 0) {
                freq[i]--;
                count++;
                count += solve(freq);
                freq[i]++;
            }
        }
        return count;
    }
    int numTilePossibilities(string tiles) {
        vector<int> freq(26, 0);
        for (char ch : tiles) {
            freq[ch - 'A']++;
        }
        return solve(freq);
    }
};
int main() {
    return 0;
}