#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    string reverseWords(string &s) {
        // code here
        vector<string> words;
        string cur = "";
        for(char ch : s){
            if(ch == '.'){
                if(!cur.empty()){
                    words.push_back(cur);
                    cur = "";
                }
            }
            else {
                cur += ch;
            }
        }
        if(!cur.empty()) words.push_back(cur);
        reverse(words.begin(), words.end());
        string ans = "";
        for(int i = 0; i < words.size(); i++){
            ans += words[i];
            if(i != words.size() - 1) ans += '.';
        }
        return ans;
    }
};
int main() {
    return 0;
}