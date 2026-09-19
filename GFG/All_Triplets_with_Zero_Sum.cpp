#include <bits/stdc++.h>
using namespace std;
class Solution {
	public:
	vector<vector<int>> findTriplets(vector<int> &arr) {
		// Code here
		int n = arr.size();
		vector<vector<int>> ans;
		for (int i = 0; i < n - 2; i++) {
			unordered_map<int, vector<int>> mp;
			for (int j = i + 1; j < n; j++) {
				int need = -(arr[i] + arr[j]);
				if (mp.find(need) != mp.end()) {
					for (int k : mp[need]) {
						ans.push_back({i, k, j});
					}
				}
				mp[arr[j]].push_back(j);
			}
		}
		return ans;
	}
};

int main() {
    return 0;
}