#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minimumSum(int num) {
        string s = to_string(num);
        sort(s.begin(), s.end());
        int new1 = (s[0] - '0') * 10 + (s[2] - '0');
        int new2 = (s[1] - '0') * 10 + (s[3] - '0');
        return new1 + new2;
    }
};
int main() {
    return 0;
}