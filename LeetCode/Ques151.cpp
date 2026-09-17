#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string reverseWords(string s) {
        vector<string> temp;
        string a = "";
        for(char x : s){
            if(x == ' '){
                if(!a.empty()){
                    temp.push_back(a);
                    a = "";
                }
            } 
            else{
                a += x;
            }
        }
        if(!a.empty()) temp.push_back(a);
        reverse(temp.begin(), temp.end());
        string ans = "";
        for(int i = 0; i < temp.size(); i++){
            if(i) ans += " ";
            ans += temp[i];
        }
        return ans;
    }
};
// or
class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        int i = 0, j = 0;
        while(i < n){
            while(i < n && s[i] == ' ') i++;
            while(i < n && s[i] != ' ') s[j++] = s[i++];
            while(i < n && s[i] == ' ') i++;
            if(i < n) s[j++] = ' ';
        }
        s.resize(j);
        reverse(s.begin(), s.end());
        int start = 0;
        for(int end = 0; end <= s.size(); end++){
            if(end == s.size() || s[end] == ' '){
                reverse(s.begin() + start, s.begin() + end);
                start = end + 1;
            }
        }
        return s;
    }
};
int main() {
    return 0;
}