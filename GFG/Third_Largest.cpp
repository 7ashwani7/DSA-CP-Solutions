#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int thirdLargest(vector<int> &arr) {
        int n = arr.size();
        if (n < 3) return -1;

        int mx1 = INT_MIN, mx2 = INT_MIN, mx3 = INT_MIN;

        for (int x : arr) {
            if (x >= mx1) {
                mx3 = mx2;
                mx2 = mx1;
                mx1 = x;
            } 
            else if (x >= mx2) {
                mx3 = mx2;
                mx2 = x;
            } 
            else if (x >= mx3) {
                mx3 = x;
            }
        }
        return mx3;
    }
};
int main() {
    return 0;
}