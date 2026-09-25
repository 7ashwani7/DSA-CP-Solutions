#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        int n = s.size();
        int m = words.size();
        int len = words[0].size();
        int total = m * len;
        if(total > n) return {};
        vector<int> ans;
        unordered_map<string, int> need;

        for(string word : words) need[word]++;

        for(int start = 0; start < len; start++){
            int l = start;
            int r = start;
            int count = 0;

            unordered_map<string, int> have;
            while(r + len <= n){
                string word = s.substr(r, len);
                r += len;
                if(need.find(word) == need.end()){
                    have.clear();
                    count = 0;
                    l = r;
                    continue;
                }
                have[word]++;
                count++;
                while(have[word] > need[word]){
                    string leftWord = s.substr(l, len);
                    have[leftWord]--;
                    l += len;
                    count--;
                }
                if(count == m){
                    ans.push_back(l);
                    string leftWord = s.substr(l, len);
                    have[leftWord]--;
                    l += len;
                    count--;
                }
            }
        }
        return ans;
    }
};
int main() {
    return 0;
}