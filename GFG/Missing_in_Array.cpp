#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
        int n = arr.size();
        long long  sum_all = (long long)(n+1)*(n+2)/2;
        long long sum=0;
        for(int i=0; i<n; i++)
         sum+=(long long)(arr[i]);
         
        return (sum_all - sum);
    }
};
int main() {
    return 0;
}