#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int modPow(int a, int b) {
        int ans = 1;
        a %= 1337;
        while(b > 0){
            if(b & 1) ans = (ans * a) % 1337;
            a = (a * a) % 1337;
            b >>= 1;
        }
        return ans;
    }
    int superPow(int a, vector<int>& b) {
        if(a == 1) return a;
        int ans = 1;
        for(int x : b){
            ans = (modPow(ans, 10) * modPow(a, x)) % 1337;
        }
        return ans;
    }
};
int main() {
    return 0;
}