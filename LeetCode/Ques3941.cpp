#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int passwordStrength(string password) {
        unordered_set<char> st(password.begin(), password.end());
        int ans=0;
        for(char ch : st){
            int val = (int)ch;
            if(97<=val && val<=122) ans+=1;
            else if(65<=val && val<=90) ans+=2;
            else if(48<= val && val <=57) ans+=3;
            else ans+=5;
        }
        return ans;
    }
};
//OR
class Solution {
public:
    int passwordStrength(string password) {
        unordered_set<char> st(password.begin(), password.end());
        int ans = 0;
        for(char ch : st) {
            if(islower(ch)) ans += 1;
            else if(isupper(ch)) ans += 2;
            else if(isdigit(ch)) ans += 3;
            else ans += 5;
        }
        return ans;
    }
};
int main() {
    return 0;
}