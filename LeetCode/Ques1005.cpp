#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        int sum = 0;
        priority_queue<int , vector<int> , greater<int>> pq;
        for(auto num : nums){
            pq.push(num);
            sum += num;
        }
        while(k--){
            int val = pq.top();
            pq.pop();
            sum -= val;
            pq.push(-val);
            sum += (-val);
        } 
        return sum;

    }
};
int main() {
    return 0;
}