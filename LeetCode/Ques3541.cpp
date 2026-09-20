#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxFreqSum(string s) {
        int v= 0,c = 0;
        unordered_map<char,int> mp;
        for(auto ch : s){
            mp[ch]++;
        }
        for(auto e : mp){
            if((e.first)=='a' || (e.first)=='e' || (e.first)=='i' || (e.first)=='o' || (e.first)=='u'){
                v= max(v, e.second);
            } else{
                c= max(c, e.second);
            }
        }

        return (v+c);
        
    }
};
int main() {
    return 0;
}