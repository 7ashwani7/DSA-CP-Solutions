#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int n = nums.size();
        int sum=0;
        for(int i=0; i<n; i++){
          sum +=nums[i];
        }
        int m;
        m= sum%k;
        return m;
        
    }
};
int main() {
    return 0;
}