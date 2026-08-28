#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool pairInSortedRotated(vector<int>& arr, int target) {
        // code here
        int n = arr.size();
        unordered_set<int> s;
        for (int i = 0; i < n; i++){
            int complement = target - arr[i];
    
            if (s.find(complement) != s.end())
                return true;

            s.insert(arr[i]);
        }
        return false;
    }
};
int main() {
    return 0;
}