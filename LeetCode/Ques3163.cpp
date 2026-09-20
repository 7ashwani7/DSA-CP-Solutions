#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string compressedString(string word) {
        int n = word.size();
        int i = 0;
        string ans = "";
        while(i < n){
            char ch = word[i];
            int count = 0;
            while(i < n && word[i] == ch){
                count++;
                i++;
            }
            while(count > 9){
                ans += '9';
                ans += ch;
                count -= 9;
            }
            if(count > 0){
                ans += to_string(count);
                ans += ch;
            }
        }
        return ans;
    }
};
int main() {
    return 0;
}