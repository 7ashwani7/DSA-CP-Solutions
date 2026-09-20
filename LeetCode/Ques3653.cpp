#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int xorAfterQueries(vector<int>& nums, vector<vector<int>>& q) {
        int n=nums.size();
        int m=q.size();
        for(int i=0; i<m; i++){
            int l=q[i][0];
            int r=q[i][1];
            while(l<=r){
                nums[l] = (nums[l] *q[i][3])%(1000000007);
                l+=q[i][2];   
            }
        }
        int ans=nums[0];
        for(int i=1; i<n; i++){
            ans=(ans ^ nums[i]);
        }

        return ans;
        
    }
};
int main() {
    return 0;
}