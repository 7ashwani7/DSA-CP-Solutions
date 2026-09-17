#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string convert(string s, int numRows) {
        int n = s.size();
        if(numRows == 1 || numRows >= n) return s;
        vector<string> rows(numRows);
        int row = 0;
        int dir = 1;
        for(char c : s){
            rows[row] += c;
            if(row == 0) dir = 1;
            else if(row == numRows - 1) dir = -1;
            row += dir;
        }
        string ans = "";
        for(string &r : rows) ans += r;

        return ans;
    }
};
int main() {
    return 0;
}