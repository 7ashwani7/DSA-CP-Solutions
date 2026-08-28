#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string repeatLimitedString(string s, int l) {
        unordered_map<char, int> mp;
        priority_queue<pair<char, int>> pq;
        for(char c : s) mp[c]++;
        for(auto x : mp) pq.push(x);
        string ans = "";
        while(!pq.empty()){
            auto a = pq.top();
            pq.pop();
            int t = min(l, a.second);
            while(t--) ans += a.first;
            if(a.second > min(l, a.second)){
                if(pq.empty()) return ans;
                auto b = pq.top();
                pq.pop();
                ans += b.first;
                if(b.second > 1) pq.push({b.first, b.second - 1});
                pq.push({a.first, a.second - min(l, a.second)});
            }
        }
        return ans;
    }
};
int main() {
    return 0;
}