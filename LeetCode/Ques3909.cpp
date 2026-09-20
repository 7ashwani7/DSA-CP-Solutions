#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int compareBitonicSums(vector<int>& nums) {
        int n = nums.size();

        int idx = 0;
        for(int i = 1; i < n; i++) {
            if(nums[i] > nums[idx]) {
                idx = i;
            }
        }
        long long sum1 = 0, sum2 = 0;
        for(int i = 0; i <= idx; i++) {
            sum1 += nums[i];
        }
        for(int i = idx; i < n; i++) {
            sum2 += nums[i];
        }
        if(sum1 > sum2) return 0;
        else if(sum1 < sum2) return 1;
        else return -1;
    }
};
// OR
class Solution {
public:
    int compareBitonicSums(vector<int>& nums) {
        int n = nums.size();
        long long sum1=nums[0], sum2=0;
        int idx=-1;
        for(int i=1; i<n; i++){
            if(nums[i]>nums[i-1]){
                sum1+=nums[i];
                idx = i;
            }
            else{
                sum2+=nums[i]; 
            }
        }
        sum2+=nums[idx];
        if(sum1>sum2) return 0;
        else if(sum1<sum2) return 1;
        else return -1;
    }
};
int main() {
    return 0;
}