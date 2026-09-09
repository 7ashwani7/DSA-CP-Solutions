#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int t) {
        int n = arr.size();
        int low = 0;
        int high = n-1;
        while(low < high){
            int sum = arr[low] + arr[high];
            if(sum == t) return {low+1 , high+1};
            else if(sum < t) low++;
            else high--;
        }
        return {};
    }
};
int main() {
    return 0;
}