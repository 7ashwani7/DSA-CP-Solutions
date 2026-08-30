#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool detectCapitalUse(string word) {
        int count = 0;
        int n = word.length(); 
        for (char c : word) {
            if (isupper(c)) count++;
        }
        if (count == n || count == 0) return true;
        return count == 1 && isupper(word[0]);
    }
};
int main() {
    return 0;
}