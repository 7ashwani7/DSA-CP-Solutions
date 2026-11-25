#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        int n = s.size();
        unordered_map<string, string> mp;
        for(auto& x : knowledge){
            mp[x[0]] = x[1];
        }
        string ans = "";
        int i = 0;
        while(i < n){
            if(s[i] == '('){
                i++;
                string temp = "";
                while(s[i] != ')'){
                    temp += s[i];
                    i++;
                }
                if(mp.count(temp)) ans += mp[temp];
                else ans += "?";
                i++;
            }
            else{
                ans += s[i];
                i++;
            }
        }
        return ans;
    }
};
int main() {
    return 0;
}