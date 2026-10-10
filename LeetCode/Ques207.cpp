#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool canFinish(int n, vector<vector<int>>& prerequisites) {
        vector<list<int>> graph(n);
        vector<int> indegree(n, 0);
        for (auto p : prerequisites) {
            int course = p[0];
            int pre = p[1];
            graph[pre].push_back(course);
            indegree[course]++;
        }
        queue<int> q;
        for (int i = 0; i < n; i++) {
            if (indegree[i] == 0) {
                q.push(i);
            }
        }
        int count = 0;
        while (not q.empty()) {
            int node = q.front();
            q.pop();
            count++;
            for (auto x : graph[node]) {
                indegree[x]--;
                if (indegree[x] == 0) {
                    q.push(x);
                }
            }
        }
        return count == n;
    }
};
int main() {
    return 0;
}