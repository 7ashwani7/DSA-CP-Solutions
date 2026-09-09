#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<int> twoSum(vector<int>& arr, int target) {
        // code here
        int n = arr.size();
        int low = 0;
        int high = n-1;
        while(low < high){
            int sum = arr[low] + arr[high];
            if(sum == target) return {low+1, high+1};
            else if(sum < target) low++;
            else high--;
        }
        return {-1, -1};
    }
};
int main() {
    return 0;
}