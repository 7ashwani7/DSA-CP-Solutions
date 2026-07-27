#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    bool areAnagrams(string& s1, string& s2) {
        // code here
        if(s1.size() != s2.size()) return false;
        vector<int> cnt(26, 0);
        for(char ch : s1) cnt[ch - 'a']++;
        for(char ch : s2) cnt[ch - 'a']--;
        for(int x : cnt){
            if(x != 0) return false;
        }
        return true;
    }
};
int main() {
    return 0;
}
