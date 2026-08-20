#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int maxLength(vector<int>& arr) {
        // code here
        unordered_map<int,int> mp;
        int sum = 0, mx = 0;
        int k = 0;
        for(int i = 0; i < arr.size(); i++) {
            sum += arr[i];
            if(sum == k) mx = i + 1;
            if(mp.find(sum - k) != mp.end()) mx = max(mx, i - mp[sum - k]);
            if(mp.find(sum) == mp.end()) mp[sum] = i;
        }
        return mx;
    }
};
int main() {
    return 0;
}