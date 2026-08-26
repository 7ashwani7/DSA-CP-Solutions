#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    typedef pair<int,vector<int>> pi;
    vector<vector<int>> kClosest(vector<vector<int>>& arr, int k) {
        priority_queue<pi> pq;
        for(auto v : arr){
            int dis = v[0]*v[0]+v[1]*v[1];
            pq.push({dis, v});
            if(pq.size() > k) pq.pop();
        }
        vector<vector<int>> ans;
        while(pq.size()>0) {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};
int main() {
    return 0;
}