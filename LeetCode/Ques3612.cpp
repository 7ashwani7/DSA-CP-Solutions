#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string processStr(string s) {
        string ans = "";
        for(char val : s){
            if(!ans.empty() && val == '*') ans.pop_back();
            else if(val == '#') ans += ans;
            else if(val == '%') reverse(ans.begin(),ans.end());
            else if(val != '*') ans += val;
        }
        return ans;
    }
};
int main() {
    return 0;
}