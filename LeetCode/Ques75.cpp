#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int i=0,mid=0, j=n-1;
        while(mid<=j){
            if(nums[mid]==2){
             int temp=nums[mid];
              nums[mid]=nums[j];
              nums[j]=temp;
              j--;
            } else if(nums[mid]==0){
                int temp=nums[mid];
                nums[mid]=nums[i];
                nums[i]=temp;
                i++;
                mid++;
            } else{
                mid++;
            }
        }
        return;
    }
};
int main() {
    return 0;
}