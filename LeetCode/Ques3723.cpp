#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        string ans = "";
        while (num > 0) {
            if (num == 1 && sum > 9) return "";
            else if (sum < 9) {
                ans += to_string(sum);
                sum -= sum;
            } else {
                ans += '9';
                sum -= 9;
            }
            num--;
        }
        return ans;
    }
};
int main() {
    return 0;
}