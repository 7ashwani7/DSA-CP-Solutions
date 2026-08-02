#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int findMinDiff(vector<int>& a, int m) {
        // code here
        int n = a.size();

        sort(a.begin(),a.end());
        int md = INT_MAX;
        
        for(int i=0; i<n-m+1; i++){
            int d = a[i+m-1]-a[i];
            if(d<md)
            md = d;
        }
        return md;
        
    }
};
int main() {
    return 0;
}