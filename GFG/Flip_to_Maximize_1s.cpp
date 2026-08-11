#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int maxOnes(vector<int>& arr) {
        // code here
        int n=arr.size();
        int count=0, maxsum=0, currsum=0;
        for(int i=0; i<n; i++){
            int val;
            if(arr[i] == 1){
                val = -1;
                count++;
            } else {
                val = 1;
            }
            currsum = max(val, currsum + val);
            maxsum = max(maxsum, currsum);
        }

        return count + maxsum;
    }
};
int main() {
    return 0;
}