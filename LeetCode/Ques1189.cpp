#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int> mp;
        for(char val : text) mp[val]++;
        int count = min({mp['b'],mp['a'],mp['l']/2,mp['o']/2,mp['n']});
        return count;
    }
};
int main() {
    return 0;
}