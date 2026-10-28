#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    unordered_map<int, int> mp;
    int valid;
    Solution(int n, vector<int>& blacklist) {
        valid = n - blacklist.size();
        for (int b : blacklist) {
            if (b >= valid) {
                mp[b] = -1;
            }
        }
        int last = n - 1;
        for (int b : blacklist) {
            if (b < valid) {
                while (mp.count(last)) {
                    last--;
                }
                mp[b] = last;
                last--;
            }
        }
    }

    int pick() {
        int num = rand() % valid;
        if (mp.count(num)) {
            return mp[num];
        }
        return num;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(n, blacklist);
 * int param_1 = obj->pick();
 */
int main() {
    return 0;
}