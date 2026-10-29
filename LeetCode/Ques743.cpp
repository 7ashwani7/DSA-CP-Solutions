#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    using pp = pair<int, int>;
    vector<list<pp>> gr;
    void add_edge(int u, int v, int wt) { gr[u].push_back({v, wt}); }
    int dijkstra(int src, int n) {
        priority_queue<pp, vector<pp>, greater<pp>> pq;
        vector<int> dist(n + 1, INT_MAX);
        pq.push({0, src});
        dist[src] = 0;
        while (!pq.empty()) {
            auto curr = pq.top();
            pq.pop();
            int wt = curr.first;
            int node = curr.second;
            if (wt > dist[node]) continue;
            for (auto neighbour : gr[node]) {
                int nextNode = neighbour.first;
                int edgeWt = neighbour.second;
                if (dist[nextNode] > dist[node] + edgeWt) {
                    dist[nextNode] = dist[node] + edgeWt;
                    pq.push({dist[nextNode], nextNode});
                }
            }
        }
        int ans = 0;
        for (int i = 1; i <= n; i++) {
            if (dist[i] == INT_MAX) return -1;
            ans = max(ans, dist[i]);
        }
        return ans;
    }
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        gr.assign(n + 1, {});
        for (auto t : times) {
            add_edge(t[0], t[1], t[2]);
        }
        return dijkstra(k, n);
    }
};
int main() {
    return 0;
}