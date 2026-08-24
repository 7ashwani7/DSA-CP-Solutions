#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int longestSubarrayDivK(vector<int>& arr, int k) {
        int n = arr.size();
        unordered_map<int, int> mp;
        
        long long sum = 0;
        int mx = 0;
        
        mp[0] = -1; 
        
        for(int i = 0; i < n; i++) {
            sum += arr[i];
            
            int rem = sum % k;
            if(rem < 0) rem += k;
            
            if(mp.find(rem) != mp.end()) {
                mx = max(mx, i - mp[rem]);
            } else {
                mp[rem] = i;
            }
        }
        
        return mx;
    }
};
int main() {
    return 0;
}