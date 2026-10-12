#include <bits/stdc++.h>
using namespace std;
class Solution {
	public:
	void solve(int n, vector<int>& ans) {
		ans.push_back(n);
		if (n <= 0) return;
		solve(n - 5, ans);
		ans.push_back(n);
	}
	vector<int> pattern(int n) {
		// code here
		vector<int> ans;
		solve(n, ans);
		return ans;
	}
};

int main() {
    return 0;
}