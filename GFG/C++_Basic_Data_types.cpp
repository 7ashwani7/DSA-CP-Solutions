#include <bits/stdc++.h>
using namespace std;
// User functiom template for C++

class Solution {
	public:
	int BasicDataType(string s) {
		// code here
		if (s.length() == 1 && !isdigit(s[0])) {
			return 1;
		}
		int pos = s.find('.');
		if (pos == string::npos) {
			return 4;
		}
		int digitsAfterDecimal = s.length() - pos - 1;
		if (digitsAfterDecimal > 5) {
			return 8;
		}
		return 4;
	}
};
int main() {
    return 0;
}
