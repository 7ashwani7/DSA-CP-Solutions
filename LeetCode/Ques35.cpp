#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i=0;
        int j=nums.size()-1;
        while(i<=j){
            int m=i+(j-i)/2;
            if(nums[m]==target)  return m;
            else if(nums[m]>target) j=m-1;
            else i=m+1;
            
        }
        return j+1;
    }
};
int main() {
    return 0;
}