#include <bits/stdc++.h>
using namespace std;
class Solution {
	public:
	int findSum(string& s) {
		// code here
		int sum = 0;
		int num = 0;
		for (char ch : s) {
			if (isdigit(ch)) {
				num = num * 10 + (ch - '0');
			}
			else {
				sum += num;
				num = 0;
			}
		}
		sum += num;
		return sum;
	}
};

int main() {
    return 0;
}