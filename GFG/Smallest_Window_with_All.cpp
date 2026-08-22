#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    string minWindow(string &s, string &t) {
        // code here
        int n = s.size();
        int k = t.size();
        if(k > n) return "";
        vector<int> need(128, 0);
        vector<int> have(128, 0);
        for(char c : t) need[c]++;
        int l = 0, req = k;
        int start = 0, len = INT_MAX;
        for(int r = 0; r < n; r++){
            have[s[r]]++;
            if(need[s[r]] > 0 && have[s[r]] <= need[s[r]]) req--;
            while(req == 0){
                if(r - l + 1 < len){
                    len = r - l + 1;
                    start = l;
                }
                have[s[l]]--;
                if(need[s[l]] > 0 && have[s[l]] < need[s[l]]) req++;
                l++;
            }
        }
        if(len == INT_MAX) return "";
        return s.substr(start, len);
    }
};
int main() {
    return 0;
}