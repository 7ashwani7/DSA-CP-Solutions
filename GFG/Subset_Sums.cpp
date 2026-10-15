#include <bits/stdc++.h>
using namespace std;
class Solution {
	public:
	vector<int> ans;
	void helper(vector<int>& arr, int idx, int sum) {
		if (idx == arr.size()) {
			ans.push_back(sum);
			return;
		}
		helper(arr, idx + 1, sum + arr[idx]);
		helper(arr, idx + 1, sum);
	}
	vector<int> subsetSums(vector<int>& arr) {
		// code here
		vector<int> curr;
		helper(arr, 0, 0);
		return ans;
	}
};

int main() {
    return 0;
}