#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> numOfBurgers(int t, int c) {        
        if (t % 2 != 0){ 
            return {};
        }
        if (t < 2 * c || t > 4 * c){
            return {};
        }
        int jumbo = (t - 2 * c) / 2;
        int small = c - jumbo;
        return {jumbo, small};
    }
};
int main() {
    return 0;
}