#include <bits/stdc++.h>
using namespace std;
// S(n)
class Solution {
public:
    int minimumIndex(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> freq;
        int dominant = nums[0];
        int total_count = 0;
        for(int x : nums){
            freq[x]++;
            if(freq[x] > total_count){
                total_count = freq[x];
                dominant = x;
            }
        }
        int left_count = 0;
        for(int i = 0; i < n - 1; i++){
            if(nums[i] == dominant) left_count++;
            int right_count = total_count - left_count;
            int left_len = i + 1;
            int right_len = n - 1 - i;
            if(left_count * 2 > left_len && right_count * 2 > right_len) return i;
        }
        return -1;
    }
};
// S(1)
class Solution {
public:
    int minimumIndex(vector<int>& nums) {
        int n = nums.size();
        int dominant = 0;
        int count = 0;
        for(int x : nums){
            if(count == 0){
                dominant = x;
                count = 1;
            } 
            else if(x == dominant){
                count++;
            } 
            else{
                count--;
            }
        }
        int total_count = 0;
        for(int x : nums) {
            if (x == dominant) total_count++;
        }
        int left_count = 0;
        for(int i = 0; i < n - 1; i++){
            if(nums[i] == dominant) left_count++;
            int right_count = total_count - left_count;
            int left_len = i + 1;
            int right_len = n - 1 - i;
            if (left_count * 2 > left_len && right_count * 2 > right_len) return i;
            
        }
        return -1;
    }
};
int main() {
    return 0;
}