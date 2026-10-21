#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string findCommonResponse(vector<vector<string>>& responses) {
        unordered_map<string, int> mp;
        for (auto& day : responses) {
            unordered_set<string> st(day.begin(), day.end());
            for (string x : st) {
                mp[x]++;
            }
        }
        string ans ;
        int mx = 0;
        for(auto x : mp){
            if(x.second > mx || (x.second == mx && (ans.empty() || x.first < ans))){
                mx = x.second;
                ans = x.first;
            }
        }
        return ans;
    }
};
int main() {
    return 0;
}