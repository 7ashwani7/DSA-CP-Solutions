#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void bfs(int node, vector<vector<int>>& arr, unordered_set<int>& v) {
        queue<int> q;
        q.push(node);
        v.insert(node);
        while (q.size() > 0) {
            int curr = q.front();
            q.pop();
            for (int j = 0; j < arr.size(); j++) {
                if (arr[curr][j] == 1 && !v.count(j)) {
                    v.insert(j);
                    q.push(j);
                }
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        unordered_set<int> visited;
        int count = 0;
        for (int i = 0; i < isConnected.size(); i++) {
            if (!visited.count(i)) {
                count++;
                bfs(i, isConnected, visited);
            }
        }
        return count;
    }
};
// OR 
class Solution {
public:
    void dfs(int node, vector<vector<int>>& arr, unordered_set<int>& v) {
        v.insert(node);
        for (int j = 0; j < arr.size(); j++) {
            if (arr[node][j] == 1 && !v.count(j)) {
                dfs(j, arr, v);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        unordered_set<int> visited;
        int count = 0;
        for (int i = 0; i < isConnected.size(); i++) {
            if (!visited.count(i)) {
                count++;
                dfs(i, isConnected, visited);
            }
        }
        return count;
    }
};
int main() {
    return 0;
}