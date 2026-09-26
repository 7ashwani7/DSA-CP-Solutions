#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int longestSubstring(string s, int k) {
        int n = s.size();
        int ans = 0;
        for(int unique = 1; unique <= 26; unique++){
            vector<int> freq(26, 0);
            int l = 0;
            int distinct = 0;
            int atleastK = 0;

            for(int r = 0; r < n; r++){
                freq[s[r] - 'a']++;
                if(freq[s[r] - 'a'] == 1) distinct++;
                if(freq[s[r] - 'a'] == k) atleastK++;
                while(distinct > unique){
                    if(freq[s[l] - 'a'] == k) atleastK--;
                    freq[s[l] - 'a']--;
                    if(freq[s[l] - 'a'] == 0) distinct--;
                    l++;
                }
                if(distinct == unique && atleastK == unique) ans = max(ans, r - l + 1);
            }
        }
        return ans;
    }
};
int main() {
    return 0;
}