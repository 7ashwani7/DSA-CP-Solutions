#include <bits/stdc++.h>
using namespace std;
class Solution {
	public:
	bool checkEdge(vector<vector<int>> & adj, int u, int v) {
		// code here
		for (int x : adj[u]) {
			if (x == v) {
				return true;
			}
		}
		return false;
	}
};

int main() {
    return 0;
}