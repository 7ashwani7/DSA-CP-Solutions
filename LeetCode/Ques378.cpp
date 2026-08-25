#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int kthSmallest(vector<vector<int>>& arr, int k) {
        int n = arr.size();
        priority_queue<int> pq;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                pq.push(arr[i][j]);
                if(pq.size()>k) pq.pop();
            } 
        }
        return pq.top();
    }
};
// OR
class Solution {
public:
    int kthSmallest(vector<vector<int>>& arr, int k) {
        int n = arr.size();
        priority_queue< vector<int>, vector<vector<int>>, greater<vector<int>>> pq;  
        for(int i=0; i<n; i++){
            pq.push({arr[i][0], i, 0});
        }
        while(--k){
            auto cur = pq.top();
            pq.pop();
            int val = cur[0];
            int row = cur[1];
            int col = cur[2];
            if(col + 1 < n){
                pq.push({arr[row][col + 1], row, col + 1});
            }
        }
        return pq.top()[0];
    }
};
int main() {
    return 0;
}