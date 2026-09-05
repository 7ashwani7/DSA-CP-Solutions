#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int mx = *max_element(costs.begin(), costs.end());
        vector<int> freq(mx + 1, 0);
        for(int val : costs) freq[val]++;
        int count = 0;
        for(int i=1; i<=mx; i++) {
            while(freq[i] > 0 && coins >= i) {
                coins -= i;
                freq[i]--;
                count++;
            }
        }
        return count;
    }
};
int main() {
    return 0;
}