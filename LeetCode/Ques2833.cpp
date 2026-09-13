#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int n = moves.size();
        int cR=0, cL=0;
        for(auto s : moves){
            if(s=='R') cR++;
            if(s=='L') cL++;
        }
        if(cR >= cL){
            return (n-2*cL);
        } else{
            return (n-2*cR);
        }
    }
};
int main() {
    return 0;
}