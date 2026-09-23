#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int k = s1.size();
        int n = s2.size();
        if(k > n) return false;
        vector<int> need(26, 0);
        vector<int> have(26, 0);
        for(char c : s1) need[c-'a']++;
        for(int i = 0; i < n; i++){
            have[s2[i]-'a']++;
            if(i >= k) have[s2[i-k]-'a']--;
            if(i >= k-1 && have == need) return true;
        }
        return false;
    }
};
int main() {
    return 0;
}