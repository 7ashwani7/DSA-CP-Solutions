#include <bits/stdc++.h>
using namespace std;
class Solution {
	public:
	string convertToRoman(int n) {
		// code here
		vector<int> val = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
		vector<string> roman = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
		string ans = "";
		for (int i = 0; i < 13; i++) {
			while (n >= val[i]) {
				ans += roman[i];
				n -= val[i];
			}
		}
		return ans;
	}
};

int main() {
    return 0;
}