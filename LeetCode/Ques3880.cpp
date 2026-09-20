#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minAbsoluteDifference(vector<int>& nums) {
        int n= nums.size();
        int m= INT_MAX;
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(nums[i]==1 && nums[j]==2|| nums[i]==2 && nums[j]==1)
                    m= min(m, abs(i-j));
            }
        }
        return m== INT_MAX ? -1:m;
    }
};
int main() {
    return 0;
}