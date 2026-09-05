#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int n = nums.size();
        if(n==1) return 0;
        int mi = INT_MAX;
        for(int i= start; i<n; i++){
            if(nums[i]==target){
                mi = min(mi,abs(start - i));
                break;
            }
        }
        for(int i=start; i>=0 ; i--){
            if(nums[i]==target){
                mi = min(mi,abs(start - i));
                break;
            }
        }
        return mi;

    }
};
int main() {
    return 0;
}