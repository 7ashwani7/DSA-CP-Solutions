#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    long long weightedSum(vector<int>& parent, vector<int>& nums) {
        int n = nums.size();
        long long ans = 0;
        vector<vector<int>> adj(n);
        for(int i = 1; i < n; i++){
            adj[parent[i]].push_back(i);
        }
        vector<int> d(n);
        d[0] = 1;
        int h = 1;
        queue<int> q;
        q.push(0);
        while(q.size() > 0){
            int x = q.front();
            q.pop();
            for(int v : adj[x]){
                d[v] = d[x] + 1;
                h = max(h, d[v]);
                q.push(v);
            }
        }
        for(int i = 0; i < n; i++){
            ans += 1LL * nums[i] * (h - d[i] + 1);
        }
        return ans;
    }
};
int main() {
    return 0;
}