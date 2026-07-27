#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<int> leaders(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans;
        int mx = arr[n-1];
        ans.push_back(mx);
        for(int i = n-2; i >= 0; i--) {
            if(arr[i] >= mx) {
                mx = arr[i];
                ans.push_back(arr[i]);
            }
        }
        reverse(ans.begin(), ans.end());
        
        return ans;
    }
};
int main() {
    return 0;
}