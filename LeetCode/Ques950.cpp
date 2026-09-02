#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int n = arr.size();
        queue<int> q;
        vector<int> ans(n);
        for(int i=0; i<n; i++){
            q.push(i);
        }
        for(int i=0; i<n; i++){
            int idx = q.front();
            q.pop();
            ans[idx] = arr[i];
            if(!q.empty()){
                q.push(q.front());
                q.pop();
            }
        }
        return ans;
    }
};
int main() {
    return 0;
}