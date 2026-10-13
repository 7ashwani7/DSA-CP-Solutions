#include <bits/stdc++.h>
using namespace std;
class Solution {
	public:
	int mod = 1e9 + 7;
	int pro(int start, int count) {
		long long p = 1;
		while (count > 0) {
			p = (p * start) % mod;
			start++;
			count--;
		}
		return p;
	}
	int sequence(int n) {
		// code here
		if (n == 1)
			return 1;
		int start = 1 + (n * (n - 1)) / 2;
		int term = pro(start, n);
		return (sequence(n - 1) + term) % mod;
		
	}
};

int main() {
    return 0;
}