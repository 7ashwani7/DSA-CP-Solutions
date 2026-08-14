#include <bits/stdc++.h>
using namespace std;
// T(n^2)
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n=nums.size();
        for(int i=0; i<n; i++){
            for(int j=i+1; j<=i+k && j<n; j++){
                if(nums[i]==nums[j]) return true;
            }
        }
       return false;   
    }
};
// T(n)
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> mp;
        int l = 0;
        for(int r = 0; r < n; r++){
            mp[nums[r]]++;
            if(mp[nums[r]] > 1){
                return true;
                break;
            } 
            if(r-l+1 > k){
                mp[nums[l]]--;
                l++;
            }
        }
        return false;
    }
};
int main() {
    return 0;
}