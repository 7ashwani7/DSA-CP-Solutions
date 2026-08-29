#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n= nums.size();
        int mx= INT_MIN;
        int count=0;
        for(int i=0; i<n; i++){
            if(nums[i]==1)
               count++;
           
            else{
                mx= max(mx,count);
                count=0;
            } 
        }
        return mx= max(mx,count);
        
    }
};
int main() {
    return 0;
}