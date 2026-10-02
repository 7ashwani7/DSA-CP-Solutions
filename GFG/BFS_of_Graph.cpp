#include <bits/stdc++.h>
using namespace std;
class Solution {
	public:
	vector<int> bfs(vector<vector<int>> &adj) {
		// code here
		vector<int> ans;
		unordered_set<int> visited;
		queue<int> q;
		q.push(0);
		visited.insert(0);
		while (q.size() > 0) {
			int curr = q.front();
			q.pop();
			ans.push_back(curr);
			for (auto& x : adj[curr]) {
				if (!visited.count(x)) {
					q.push(x);
					visited.insert(x);
				}
			}
		}
		return ans;
	}
};

int main() {
    return 0;
}