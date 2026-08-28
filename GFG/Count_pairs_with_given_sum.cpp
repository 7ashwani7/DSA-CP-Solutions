#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int countPairs(vector<int> &arr, int target) {
        // Code here
        unordered_map<int, int> mp;
        int count = 0;
        for(int x : arr){
            count += mp[target - x];
            mp[x]++;
        }
        return count;
    }
};
int main() {
    return 0;
}