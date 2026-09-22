#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int countKdivPairs(vector<int>& arr, int k) {
        // code here
        vector<int> freq(k, 0);
        int ans = 0;
        for(int x : arr){
            int rem = ((x % k) + k) % k;
            int comp = (k - rem) % k;
            ans += freq[comp];
            freq[rem]++;
        }
        return ans;
    }
};
int main() {
    return 0;
}