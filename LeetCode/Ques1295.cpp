#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;
        for(int num : nums){
            if((num >= 10 && num <= 99) || (num >= 1000 && num <= 9999) || num == 100000) count++;
        }
        return count;
    }
};
// OR 
class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n = nums.size();
        string s = ""; 
        int count = 0;
        for(int i = 0; i < n; i++){
            s = to_string(nums[i]);
            if(s.size() % 2 == 0) count++;
        }
        return count;
    }
};
int main() {
    return 0;
}