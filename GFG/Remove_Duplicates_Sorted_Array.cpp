#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<int> removeDuplicates(vector<int> &arr) {
        // code here
        // set<int> ans(arr.begin(), arr.end());
        // vector<int> res(ans.begin(),ans.end());
        // return res;
        int n= arr.size();
        vector<int> ans;
        ans.push_back(arr[0]);
        for(int i=1; i<n; i++){
            if(arr[i-1]!=arr[i])
                ans.push_back(arr[i]);
        }
        return ans;
    }
};
int main() {
    return 0;
}