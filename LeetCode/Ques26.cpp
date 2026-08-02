#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
      if(nums.empty()) return 0;
      int n=nums.size();
        int j=0;
        for(int i=0; i<n; i++){
            if(nums[i]!=nums[j]){
                j++;
              nums[j]=nums[i];
            }
            
        }
        return j+1;
        
        
    }
};
int main() {
    return 0;
}