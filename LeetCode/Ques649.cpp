#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string predictPartyVictory(string s) {
        int n = s.size();
        queue<int> r,d;
        for(int i=0; i<n; i++){
            if(s[i] == 'R') r.push(i);
            else d.push(i);
        }
        while(!r.empty() && !d.empty()){
            int ri = r.front();
            int di = d.front();
            r.pop();
            d.pop();
            if(ri < di) r.push(ri + n);
            else d.push(di + n);
        }
        return r.empty() ? "Dire" : "Radiant";
    }
};
int main() {
    return 0;
}