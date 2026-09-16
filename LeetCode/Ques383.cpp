#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> cnt(26,0);
        for(char c : magazine) cnt[c-'a']++;
        for(char c : ransomNote) cnt[c-'a']--;
        for(int x : cnt){
            if(x < 0) return false;
        }
        return true;
    }
};
int main() {
    return 0;
}