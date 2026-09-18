#include <bits/stdc++.h>
using namespace std;
class Solution {
public :
    int digitSum(int n){
        int ans=0;
        while(n>0){
            int r = n%10;
            ans+=r;
            n = n/10;
        }
        return ans;
    }
    int minElement(vector<int>& nums) {
        int mi = INT_MAX;
        for(int i=0; i<nums.size(); i++){
            int m = digitSum(nums[i]);
            if(m<mi){
                mi = m;
            }
        }
        return mi;
    }
};
int main() {
    return 0;
}