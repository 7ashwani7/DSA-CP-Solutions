#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int gcd(int a , int b){
        if(b == 0) return a;
        return gcd(b , a % b);
    }
    bool hasGroupsSizeX(vector<int>& deck) {
        unordered_map<int,int> mp;
        for(int x : deck){
            mp[x]++;
        }
        int temp = 0;
        for(auto x : mp){
            temp = gcd(temp , x.second);
        }
        return temp > 1;
    }
};
int main() {
    return 0;
}