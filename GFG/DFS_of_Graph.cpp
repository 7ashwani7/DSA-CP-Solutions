#include <bits/stdc++.h>
using namespace std;
class Solution {
	public:
	void dfs(int node, vector<vector<int>> & adj, unordered_set<int>& v, vector<int>& ans) {
		v.insert(node);
		ans.push_back(node);
		for (auto x : adj[node]) {
			if (!v.count(x)) {
				dfs(x, adj, v, ans);
			}
		}
		
	}
	vector<int> dfs(vector<vector<int>> & adj) {
		// Code here
		vector<int> ans;
		unordered_set<int> visited;
		dfs(0, adj, visited, ans);
		return ans;
	}
};

int main() {
    return 0;
}