#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int dSum(int n){
        int ans=0;
        while(n>0){
            int r = n%10;
            ans+=r;
            n = n/10;
        }
        return ans;
    }
    int smallestIndex(vector<int>& nums) {
        for(int i=0; i<nums.size(); i++){
            if(i==dSum(nums[i]))
                return i;
        }
        return -1;
        
    }
};
int main() {
    return 0;
}