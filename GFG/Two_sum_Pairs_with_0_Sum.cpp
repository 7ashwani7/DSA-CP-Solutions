#include <bits/stdc++.h>
using namespace std;


class Solution {
  public:
    vector<vector<int>> getPairs(vector<int>& arr) {
        // code here
        int n =arr.size();
        vector<vector<int>> ans;
        sort(arr.begin(), arr.end());
            int i=0,j=n-1;
            while(i<j){
                int sum= arr[i]+arr[j];
                if(sum==0){
                    ans.push_back({arr[i], arr[j]});
                
                    int left = arr[i], right = arr[j];
                    
                    while(i < j && arr[i] == left) i++;
                    while(i < j && arr[j] == right) j--;
                }
                else if(sum < 0) i++;
                else j--;
               
               
            }
        
        return ans;
        
    }
};
int main() {
    return 0;
}