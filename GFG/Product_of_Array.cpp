#include <bits/stdc++.h>
using namespace std;
class Solution {
	public:
	long long int product(vector<int> &arr) {
		// code here
		long long ans = 1;
		int mod = 1000000007;
		for (int x : arr) {
			ans = (ans * x) % mod;
		}
		return ans;
	}
};

int main() {
    return 0;
}