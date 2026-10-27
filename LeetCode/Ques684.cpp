#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> parent;
    vector<int> rank;
    int find(int x) {
        if (parent[x] == x) return x;
        return parent[x] = find(parent[x]);
    }
    void unite(int a, int b) {
        a = find(a);
        b = find(b);
        if (a == b) return;
        if (rank[a] < rank[b]) swap(a, b);
        parent[b] = a;
        if (rank[a] == rank[b]) rank[a]++;
    }
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        int n = edges.size();
        parent.resize(n + 1);
        rank.resize(n + 1, 0);
        for (int i = 1; i <= n; i++) parent[i] = i;
        vector<int> ans;
        for (auto edge : edges) {
            int u = edge[0];
            int v = edge[1];
            if (find(u) == find(v)) {
                ans = edge;
            } else {
                unite(u, v);
            }
        }
        return ans;
    }
};
int main() {
    return 0;
}