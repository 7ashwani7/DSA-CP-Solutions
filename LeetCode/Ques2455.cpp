#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int averageValue(vector<int>& nums) {
        int n=nums.size();
        int sumo=0, count=0;
        for(int i=0; i<n; i++){
            if(nums[i]%2==0 && nums[i]%3==0){
                sumo+=nums[i];
                count++;
            }
           
        }
        if (count>0) return (sumo/count);
        else return 0;

    }
};
int main() {
    return 0;
}