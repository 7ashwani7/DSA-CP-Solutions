#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int s=0;
       for(int i=0; i<n ; i++){
           s+=nums[i];
       }
        int count=0;
        for(int i=0; i<n+1;i++){
            count+=i;
        }
        return (count -s);
        
    }
};
int main() {
    return 0;
}