#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int smallestSubWithSum(int x, vector<int>& a) {
        // Your code goes here
        int n = a.size();
        int start=0, sum=0;
        int mi = INT_MAX;
        for(int i=0; i<n; i++){
            sum+=a[i];
            while(sum > x){
                mi = min(mi, i+1-start);
                sum-=a[start];
                start++;
            }
        }
        
        return (mi == INT_MAX) ? 0 : mi;
        
    }
};
int main() {
    return 0;
}