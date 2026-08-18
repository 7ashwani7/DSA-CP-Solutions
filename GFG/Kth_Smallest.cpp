#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int kthSmallest(vector<int> &arr, int k) {
        // code here
        sort(arr.begin(), arr.end());
        return arr[k-1];
    }
};
// OR 
class Solution {
  public:
    int kthSmallest(vector<int> &arr, int k) {
        // code here
        int n = arr.size();
        priority_queue<int> pq;
        for(int i=0; i<n; i++){
            pq.push(arr[i]);
            if(pq.size()>k) pq.pop();
        }
        return pq.top();
    }
};
int main() {
    return 0;
}