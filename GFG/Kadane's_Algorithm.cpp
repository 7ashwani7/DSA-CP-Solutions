#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        // Code here
        int n= arr.size();
        int c_sum=0;
        int m_sum= INT_MIN;
        for(int i=0; i<n; i++){
            c_sum = max(arr[i], c_sum+arr[i]);
            m_sum = max(m_sum, c_sum);
            
        }
        return m_sum;
    }
};
int main() {
    return 0;
}