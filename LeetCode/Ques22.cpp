#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void generate( vector<string>& ans, string s, int open, int close, int n){
        if(close==n){
            ans.push_back(s);
            return;
        }
        if(open<n)generate(ans, s+'(', open+1, close, n);
        if(close<open)generate(ans, s+')', open, close+1, n);

    }
    vector<string> generateParenthesis(int n) {
       vector<string> ans;
       generate(ans,"",0,0,n);
       return ans; 
    }
};
// OR
class Solution {
public:
    vector<string> ans;
    void generate(string& s, int open, int close, int n) {
        if (close == n) {
            ans.push_back(s);
            return;
        }
        if (open < n) {
            s.push_back('(');
            generate(s, open + 1, close, n);
            s.pop_back();
        }
        if (close < open) {
            s.push_back(')');
            generate(s, open, close + 1, n);
            s.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        ans.clear();
        string s;
        generate(s, 0, 0, n);
        return ans;
    }
};
int main() {
    return 0;
}