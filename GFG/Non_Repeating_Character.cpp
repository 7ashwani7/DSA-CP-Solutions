#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    char nonRepeatingChar(string &s) {
        //  code here
        vector<int> freq(26, 0);
        for(char c : s) freq[c-'a']++;
        for(char c : s){
            if(freq[c-'a'] == 1) return c;
        }
        return '$';
    }
};
int main() {
    return 0;
}