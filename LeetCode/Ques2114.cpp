#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int ans = 0;
        for(string x : sentences){
            string s = x;
            int count = 0;
            for(char c : s){
                if(c == ' '){
                    count++;
                }
            }
            ans = max(ans, count+1);
        }
        return ans;
    }
};
int main() {
    return 0;
}