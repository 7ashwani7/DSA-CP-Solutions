#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    string toggleCase(string &s) {
        // code here
        string ans = "";
        for(char x : s){
            if(isupper(x)) ans += tolower(x);
            else ans += toupper(x);
        }
        return ans;
    }
    
};
int main() {
    return 0;
}