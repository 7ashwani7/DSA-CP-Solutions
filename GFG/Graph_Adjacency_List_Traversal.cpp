#include <bits/stdc++.h>
using namespace std;
class Solution {
	public:
	vector<vector<int>> printGraph(int V, vector<pair<int, int>> & edges) {
		// code here
		vector<vector<int>> adj(V);
		for (auto edge : edges) {
			int u = edge.first;
			int v = edge.second;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		return adj;
	}
};

int main() {
    return 0;
}