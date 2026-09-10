#include <bits/stdc++.h>
using namespace std;
class Solution {
	public:
	vector<int> diffArray(vector<int>& arr, vector<vector<int>> & opr) {
		// code here
		int n = arr.size();
		vector<int> diff(n + 1, 0);
		for (int i = 0; i < opr.size(); i++) {
			int l = opr[i][0];
			int r = opr[i][1];
			int v = opr[i][2];
			diff[l] += v;
			diff[r + 1] -= v;
		}
		vector<int> ans(n);
		ans[0] = arr[0] + diff[0];
		for (int i = 1; i < n; i++) {
			diff[i] += diff[i - 1];
			ans[i] = arr[i] + diff[i];
		}
		return ans;
	}
};

int main() {
    return 0;
}