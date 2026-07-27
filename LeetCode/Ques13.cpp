#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int romanToInt(string s) {
        int n = s.length();
        int num=0;
        unordered_map<char, int> r{{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
        for(int i=0; i<n; i++){
            if(i+1<n && r[s[i]]< r[s[i+1]])
              num-=r[s[i]];
            else
              num+=r[s[i]];
        }
        return num; 
    }
};
int main() {
    return 0;
}