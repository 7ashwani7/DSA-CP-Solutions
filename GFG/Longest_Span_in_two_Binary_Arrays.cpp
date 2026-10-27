#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int equalSumSpan(vector<int> &a1, vector<int> &a2) {
        // code here
        int n = a1.size();
        int ans = 0;
        unordered_map<int, int> mp;
        int sum1 = 0; 
        int sum2 = 0;
        for(int i = 0; i < n; i++){
            sum1 += a1[i];
            sum2 += a2[i];
            if(sum1 - sum2 == 0) {
                ans = max(ans, i+1);
            }
            else if(mp.count(sum1-sum2)){
                ans = max(ans, i - mp[sum1 - sum2]);
            }
            else{
                mp[sum1-sum2] = i;
            }
        }
        return ans;
    }
};
int main() {
    return 0;
}