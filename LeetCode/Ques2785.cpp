#include <bits/stdc++.h>
using namespace std;
// Time Complexity: O(nlogn) + O(n) + O(n) = O(nlogn)
class Solution {
public:
    bool isVowel(char c){
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') return true;
        else return false;
    }
    string sortVowels(string s) {
        int n = s.size();
        string temp = "";
        for(int i = 0; i < n; i++){
            if(isVowel(tolower(s[i]))){
                temp += s[i];
            }
        }
        sort(temp.begin(), temp.end());
        int idx = 0;
        for(int i = 0; i < n; i++){
            if(isVowel(tolower(s[i]))){
                s[i] = temp[idx++];
            }
        }
        return s;
    }
};
// T(n)
class Solution {
public:
    bool isVowel(char c) {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
    }
    string sortVowels(string s) {
        int n = s.size();
        int freq[128] = {0};
        for(char c : s){
            if(isVowel(c)){
                freq[c]++;
            }
        }
        int idx = 0;
        for(int i = 0; i < n; i++){
            if(isVowel(s[i])){
                while(freq[idx] == 0) idx++;
                s[i] = char(idx);
                freq[idx]--;
            }
        }
        return s;
    }
};
int main() {
    return 0;
}