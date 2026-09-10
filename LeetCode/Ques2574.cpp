#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int> leftSum(n),rightSum(n),ans(n);
        leftSum[0]=0;
        rightSum[n-1]=0;
        for(int i=1; i<n; i++){
            leftSum[i]= nums[i-1]+leftSum[i-1];
        }
        for(int i=n-2; i>=0; i--){
            rightSum[i]=rightSum[i+1]+nums[i+1];
        }
        for(int i=0; i<n; i++){
            ans[i]=abs(leftSum[i]-rightSum[i]);
        }
        return ans;
    }
};
//   OR
class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int total = 0;
        for(int x : nums) {
            total += x;
        }
        vector<int> ans;
        int leftSum = 0;
        for(int i = 0; i < nums.size(); i++) {
            total -= nums[i];
            ans.push_back(abs(leftSum - total));
            leftSum += nums[i];
        }
        return ans;
    }
};
int main() {
    return 0;
}