#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        vector<int> freq(26, 0);
        for(char c : chars){
            freq[c-'a']++;
        }
        int ans = 0;
        for(string word : words){
            vector<int> cnt(26, 0);
            bool good = true;
            for(char c : word){
                cnt[c-'a']++;
                if (cnt[c-'a'] > freq[c-'a']){
                    good = false;
                    break;
                }
            }
            if(good) ans += word.size();
        }
        return ans;
    }
};
int main() {
    return 0;
}