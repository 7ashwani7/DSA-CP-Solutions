#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s);
        string word;
        string lastword;
        while(ss>>word){
            lastword = word;
        }
        return lastword.length();
        
    }
};
int main() {
    return 0;
}