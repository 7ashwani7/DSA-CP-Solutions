#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    bool canFormPalindrome(string &s) {
        // code here
        int odd=0;
        unordered_map<char,int> mp;
        for(auto &e : s){
            mp[e]++;
        }
        for(auto &e : mp){
            if((e.second) %2 !=0){
                odd++;
            }
        }
        return (odd > 1) ? false : true; 
    }
};
int main() {
    return 0;
}