#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string addStrings(string num1, string num2) {
        int n = num1.size();
        int m = num2.size();
        string ans = "";
        int carry = 0;
        int i = n - 1;
        int j = m - 1;
        while (i >= 0 || j >= 0 || carry) {
            int sum = carry;
            if (i >= 0) {
                sum += num1[i] - '0';
                i--;
            }
            if (j >= 0) {
                sum += num2[j] - '0';
                j--;
            }
            carry = sum / 10;
            ans += to_string(sum % 10);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

int main() {
    return 0;
}