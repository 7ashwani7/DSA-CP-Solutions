#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    typedef pair<int, string> p;
    struct Compare {
        bool operator()(p a, p b) {
            if (a.first == b.first) {
                return a.second > b.second;
            }
            return a.first < b.first;
        }
    };
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string, int> mp;
        for (string s : words) {
            mp[s]++;
        }
        priority_queue<p, vector<p>, Compare> pq;
        for (auto it : mp) {
            pq.push({it.second, it.first});
        }
        vector<string> ans;
        while (k--) {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};
int main() {
    return 0;
}