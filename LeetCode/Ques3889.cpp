#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int mirrorFrequency(string s) {
        unordered_map<char,int> mp;
        for(char c : s) mp[c]++;
        
        int ans = 0;
        unordered_set<char> st;
        
        for(auto it : mp) {
            char c = it.first;
            if(st.count(c)) continue;
            
            char m;
            if(isalpha(c)) m = 'a' + ('z' - c);
            else m = '0' + ('9' - c);
            
            int a = mp[c];
            int b = mp.count(m) ? mp[m] : 0;
            
            ans += abs(a - b);
            
            st.insert(c);
            st.insert(m);
        }
        
        return ans;
    }
};
int main() {
    return 0;
}