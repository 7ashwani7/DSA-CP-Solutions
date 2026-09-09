#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
      int n= nums.size();
      int sum=0,diSum=0;
      for(int i=0; i<n; i++) sum+=nums[i];
      for(int i=0; i<n;i++){
        int j= nums[i];
        while(j>0){
            diSum+=j%10;
            j/=10;
        }
       }
         return abs(diSum - sum);
    }
};
int main() {
    return 0;
}