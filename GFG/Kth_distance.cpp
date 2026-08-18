#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    bool checkDuplicatesWithinK(vector<int>& arr, int k) {
        // your code
        int n = arr.size();
        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j <= i + k && j < n; j++) {
                if(arr[i] == arr[j])
                return true;
            }
        }
        
        return false;
    }
};
            // Optimized Solution
class Solution {
  public:
    bool checkDuplicatesWithinK(vector<int>& arr, int k) {
        unordered_map<int, int> mp;
        
        for(int i = 0; i < arr.size(); i++) {
            if(mp.count(arr[i])) {
                if(i - mp[arr[i]] <= k)
                    return true;
            }
            mp[arr[i]] = i;
        }
        
        return false;
    }
};
int main() {
    return 0;
}