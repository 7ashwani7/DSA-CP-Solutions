#include <bits/stdc++.h>
using namespace std;
class Solution {
	public:
	void printNos(int n) {
		// code here
		if (n == 0) {
			return;
		}
		cout << n << " ";
		printNos(n - 1);
	}
};

int main() {
    return 0;
}