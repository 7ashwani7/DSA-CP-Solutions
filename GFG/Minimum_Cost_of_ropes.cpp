#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int minCost(vector<int>& arr) {
        // code here
        int ans = 0;
        priority_queue<int, vector<int>, greater<int>> pq;
        for(auto num : arr){
            pq.push(num);
        }
        while(pq.size()>1){
            int x = pq.top();
            pq.pop();
            int y = pq.top();
            pq.pop();
            ans += x+y;
            pq.push(x+y);
        }
        return ans;
    }
};
int main() {
    return 0;
}