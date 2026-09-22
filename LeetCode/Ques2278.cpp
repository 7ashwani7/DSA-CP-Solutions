#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int percentageLetter(string s, char letter) {
        int n = s.size();
        int freq = 0;
        for(char c : s){
            if(c == letter) freq++;
        }
        return ((freq * 100) / n);
    }
};
int main() {
    return 0;
}