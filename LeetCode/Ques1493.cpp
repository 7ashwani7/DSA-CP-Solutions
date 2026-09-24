#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n=nums.size();
        int k=1;    
        int flip=0, i=0, j=0;
        int maxLen=INT_MIN, len=INT_MIN;
        while(j<n){
            if(nums[j]==1) j++;
            else{
                if(flip<k){
                    flip++;
                    j++;
                }
                else{
                    len=j-i;
                    maxLen=max(maxLen, len);
                    while(nums[i]==1) i++;
                    i++;
                    j++;
                }
            }
        }
        len=j-i;
        maxLen=max(maxLen, len);
        return maxLen-1;
    }
};
// OR 
class Solution {
public:
    int longestSubarray(vector<int>& arr) {
        int n = arr.size();
        int count = 0;
        int left = 0;
        int ans = 0;
        for (int right = 0; right < n; right++) {
            if (arr[right] == 0)
                count++;
            while (count > 1) {
                if (arr[left] == 0) count--;
                left++;
            }
            ans = max(ans, right - left);
        }
        return ans;
    }
};
int main() {
    return 0;
}