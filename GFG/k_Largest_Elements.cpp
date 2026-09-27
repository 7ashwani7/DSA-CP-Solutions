#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<int> kLargest(vector<int>& arr, int k) {
        // code here
        int n = arr.size();
        vector<int> ans;
        priority_queue<int> pq;
        for(auto val : arr){
            pq.push(val);
        }
        while(k--){
            int x = pq.top();
            pq.pop();
            ans.push_back(x);
        }
        return ans;
    }
};
int main() {
    return 0;
}