#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string smallestPalindrome(string s) {
        int n = s.size();
        int count[26] = {0};
        for(int i = 0; i < n/2; i++){
            count[s[i] - 'a']++;
        }
        int idx = 0;
        for(int i = 0; i < 26; i++){
            while(count[i] > 0){
                s[idx++] = (char)(i + 'a');
                count[i]--;
            }
        }
        for(int i = 0; i < n / 2; ++i){
            s[n-1-i] = s[i];
        }
        return s;

    }

};
// OR 
class Solution {
public:
    string smallestPalindrome(string s) {
        string ans  = "";
        int n = s.size();
        sort(s.begin(), s.begin()+n/2);
        for(int i = 0; i < n / 2; i++) ans += s[i];
        if (n % 2 != 0) ans += s[n / 2];
        for(int i = n / 2 - 1; i >= 0; i--) ans += s[i];
        return ans;
    }
};
int main() {
    return 0;
}