#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> idxs;

        for (int i = 0; i < words.size(); i++) {
            for (const char& c : words[i]) {
                if (c == x) {
                    idxs.push_back(i);
                    break;
                }
            }
        }

        return idxs;
    }
};
// OR
class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> ans;
        for(int i=0; i<words.size(); i++){
            string s = words[i];
            if(s.find(x)!= string::npos){
                ans.push_back(i);
            }

        }
        return ans;
    }
};
int main() {
    return 0;
}