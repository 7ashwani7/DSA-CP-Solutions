#include <bits/stdc++.h>
using namespace std;
class Solution {
	public:
	void solve(string &s, int idx, string &curr, vector<string> &ans) {
		if (idx == s.size()) {
			ans.push_back(curr);
			return;
		}
		curr.push_back(s[idx]);
		solve(s, idx + 1, curr, ans);
		curr.pop_back();
		solve(s, idx + 1, curr, ans);
	}
	vector<string> powerSet(string s) {
		// code here
		vector<string> ans;
		string curr = "";
		solve(s, 0, curr, ans);
		return ans;
	}
};

int main() {
    return 0;
}