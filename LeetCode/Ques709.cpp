#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string toLowerCase(string s) {
        string ans = "";
        for(char x : s){
            ans += tolower(x);
        }
        return ans;
    }
};
int main() {
    return 0;
}