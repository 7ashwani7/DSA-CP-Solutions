#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string reversePrefix(string s, int k) {
        int n = s.size();
        // string ans = s;
        // reverse(ans.begin(), ans.begin()+k);
        // return ans;
        string ans="";
        for(int i=k-1; i>=0; i--){
            ans+=s[i];
        }
        for(int i=k; i<n; i++){
            ans+=s[i];
        }
        return ans;
        
    }
};
int main() {
    return 0;
}