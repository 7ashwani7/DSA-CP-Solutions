#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int findSmallest(vector<int> &arr) {
        // code here.
        sort(arr.begin(), arr.end());
        int ans=0;
        for(auto &val : arr){
            if(val <= ans+1){
                ans+=val;
            }
            else{
                return ans+1;
            }
        }
        return ans+1;
    }
};
int main() {
    return 0;
}