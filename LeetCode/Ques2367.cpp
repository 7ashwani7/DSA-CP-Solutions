#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
      int n= nums.size();
      int count =0;
      for (int i=0; i<n-2; i++){
        for(int j=+1; j<n-1; j++){
            for(int k=j+1; k<n; k++){
                if((nums[j] - nums[i] == diff)  && (nums[k] - nums[j] == diff))
                count++;
            }
        }
      } 
      return count; 
    }
};
// OR
class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        unordered_map<int, int> mp;
        for (int x : nums) {
            mp[x]++;
        }
        int count = 0;
        for (int x : nums) {
            if (mp.count(x - diff) && mp.count(x - 2 * diff)) {
                count++;
            }
        }
        return count;
    }
};
int main() {
    return 0;
}