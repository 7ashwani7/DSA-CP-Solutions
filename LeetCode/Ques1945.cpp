#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int getLucky(string s, int k) {
        string t = "";
        for(char c : s){
            t += to_string(c - 'a' + 1);
        }
        while(k--){
            int sum = 0;
            for(char c : t){
                sum += (c - '0'); 
            }
            t = to_string(sum);
        }
        return stoi(t);
    }
};
int main() {
    return 0;
}