#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int subArraySum(vector<int>& arr, int k) {
        // code here
        unordered_map<int, int> mp;
        mp[0] = 1;
        int sum = 0;
        int count = 0;
        for(int i = 0; i < arr.size(); i++){
            sum += arr[i];
            if(mp.find(sum - k) != mp.end()){
                count += mp[sum - k];
            }
            mp[sum]++;
        }
        return count;
    }
};
int main() {
    return 0;
}