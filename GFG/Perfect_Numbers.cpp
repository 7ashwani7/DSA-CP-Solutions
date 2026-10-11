#include <bits/stdc++.h>
using namespace std;
class Solution {
	public:
	bool isPerfect(int n) {
		// code here
		int sum = 1;
		for (int i = 2; i * i <= n; i++) {
			if (n % i == 0) {
				sum += i;
				if (i != n / i) sum += n / i;
			}
		}
		return sum == n;
	}
};

int main() {
    return 0;
}