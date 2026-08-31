#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<int> arranged(vector<int>& arr) {
        // code here
        int n = arr.size();
        vector<int> ans(n);
        int i=0, j=1;
        for(int k=0; k<n; k++){
            if(arr[k] > 0){
                ans[i]=arr[k];
                i+=2;
            }
            else{
                ans[j]=arr[k];
                j+=2;
            }
        }
        return ans;
            
        
    }
};
int main() {
    return 0;
}