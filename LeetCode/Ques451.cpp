#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string frequencySort(string s) {
        int n = s.size();
        unordered_map<char, int> mp;
        for (char c : s) {
            mp[c]++;
        }
        priority_queue<pair<int, char>> pq;
        for (auto x : mp) {
            pq.push({x.second, x.first});
        }
        string ans = "";
        while (pq.size() > 0) {
            int freq = pq.top().first;
            while (freq--) {
                ans += pq.top().second;
            }
            pq.pop();
        }
        return ans;
    }
};
int main() {
    return 0;
}