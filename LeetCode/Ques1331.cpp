#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    typedef pair<int,int> p;
    vector<int> arrayRankTransform(vector<int>& arr) {
        int n = arr.size();
        if(n == 0) return {};
        vector<int> ans(n);
        priority_queue<p , vector<p> , greater<p>> pq;
        for(int i = 0; i < n; i++){
            pq.push({arr[i] , i});
        }
        int rank = 1;
        int x = pq.top().first;
        ans[pq.top().second] = rank;
        pq.pop();
        while(pq.size() > 0){
            int y = pq.top().first;
            int idx = pq.top().second;
            if(x != y){
                ans[idx] = ++rank;
                x = y;
            } 
            ans[idx] = rank;
            pq.pop();
        }
        return ans;
    }
};
// OR
class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int n = arr.size();
        if(n == 0) return {};
        vector<pair<int, int>> v;
        vector<int> ans(n);
        for(int i = 0; i < n; i++){
            v.push_back({arr[i], i});
        }
        sort(v.begin(), v.end());
        int rank = 1;
        ans[v[0].second] = rank;
        for(int i = 1; i < n; i++){
            if(v[i].first != v[i - 1].first) rank++;
            ans[v[i].second] = rank;
        }
        return ans;
    }
};
int main() {
    return 0;
}