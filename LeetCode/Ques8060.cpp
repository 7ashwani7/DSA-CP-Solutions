#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> memLeak(int m1, int m2) {
        int i = 1;
        while (i <= m1 || i <= m2) {
            if (m1 < m2) {
                m2 -= i;
            } else {
                m1 -= i;
            }
            i++;
        }
        return {i, m1, m2};
    }
};
int main() {
    return 0;
}