#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int similarPairs(vector<string>& words) {
        map<set<char>, int> freq;
        int ans = 0;
        for(string s : words){
            set<char> st(s.begin(), s.end());
            ans += freq[st];
            freq[st]++;
        }
        return ans;
    }
};
int main() {
    return 0;
}