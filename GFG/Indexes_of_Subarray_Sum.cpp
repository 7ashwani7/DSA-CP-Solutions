#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        vector<int> ans;
        int n = arr.size();
        int sum = 0, j = 0;
        
        for(int i = 0; i < n; i++){
            sum += arr[i];
            
            while(sum > target && j <= i){
                sum -= arr[j];
                j++;
            }
            
            if(sum == target){
                ans.push_back(j + 1);
                ans.push_back(i + 1);
                return ans;
            }
        }
        
        return {-1};
    }
};
int main() {
    return 0;
}