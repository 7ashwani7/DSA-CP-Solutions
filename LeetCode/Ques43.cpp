#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string multiply(string num1, string num2) {
        if (num1 == "0" || num2 == "0") return "0";
        int n = num1.size();
        int m = num2.size();
        vector<int> digits(n + m, 0);
        for (int i = n - 1; i >= 0; i--) {
            int d1 = num1[i] - '0';
            for (int j = m - 1; j >= 0; j--) {
                int d2 = num2[j] - '0';
                int sum = d1 * d2 + digits[i + j + 1];
                digits[i + j + 1] = sum % 10;
                digits[i + j] += sum / 10;
            }
        }
        string ans = "";
        ans.reserve(n + m);
        for (int i = 0; i < digits.size(); i++) {
            if (ans.empty() && digits[i] == 0) continue;
            ans.push_back(digits[i] + '0');
        }
        return ans;
    }
};
int main() {
    return 0;
}