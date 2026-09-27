#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<vector<int>> countFreq(vector<int>& arr) {
        // code here
        vector<vector<int>> ans;
        unordered_map<int,int> mp;
        for(auto x : arr){
            mp[x]++;
        }
        for(auto x : mp){
            ans.push_back({x.first , x.second});
        }
        return ans;
        
    }
};
int main() {
    return 0;
}