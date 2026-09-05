#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int a = 0;
        int maxA = 0;
        for (int x : gain) {
            a += x;
            maxA = max(maxA, a);
        }
        return maxA;
    }
};
int main() {
    return 0;
}