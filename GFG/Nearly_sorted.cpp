#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    void nearlySorted(vector<int>& arr, int k) {
        // code here
        int n = arr.size();
        int idx = 0;
        priority_queue<int , vector<int> , greater<int>> pq;
        for(int i=0; i<n; i++){
            pq.push(arr[i]);
            if(pq.size()>k){
                arr[idx++] = pq.top();
                pq.pop();
            } 
        }
        while(pq.size()>0){
            arr[idx++] = pq.top();
            pq.pop();
        }
    }
};
int main() {
    return 0;
}