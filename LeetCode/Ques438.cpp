#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n = s.size();
        int k = p.size();
        if(k > n) return {};
        vector<int> ans;
        vector<int> need(26, 0);
        vector<int> have(26, 0);
        for(char c : p) need[c-'a']++;
        for(int i = 0; i < n; i++){
            have[s[i]-'a']++;
            if(i >= k) have[s[i-k]-'a']--;
            if(i >= k-1 && have == need) ans.push_back(i-k+1);
        }
        return ans;
    }
};
int main() {
    return 0;
}