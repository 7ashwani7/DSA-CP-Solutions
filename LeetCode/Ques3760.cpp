#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxDistinct(string s) {
        unordered_map<char,int> mp;
        for(auto a : s){
            mp[a]++;
        }
        return mp.size();
    }
};
int main() {
    return 0;
}