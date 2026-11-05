#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPalindromic(string s) {
        string binary = "";
        for (char c : s) {
            int x = c;
            for (int i = 7; i >= 0; i--) {
                binary += ((x >> i) & 1) + '0';
            }
        }
        int i = 0, j = binary.size() - 1;
        while (i < j) {
            if (binary[i] != binary[j]) {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};
int main() {
    return 0;
}