#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        return ((nums[n-1]-1)*(nums[n-2]-1));
    }
};
// OR 
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        priority_queue<int> pq;
        for(auto val : nums){
            pq.push(val);
        }
        int x = pq.top()-1;
        pq.pop();
        int y = pq.top()-1;
        return (x*y);
    }
};
int main() {
    return 0;
}