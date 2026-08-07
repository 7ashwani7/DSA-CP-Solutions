#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int findEquilibrium(vector<int> &arr) {
        // code here
        int n= arr.size();
        vector<int> p(n);
        vector<int> s(n);
        p[0]= arr[0];
        s[n-1]=arr[n-1];
        for(int i=1; i<n; i++)
            p[i]= arr[i]+p[i-1];
        for(int i=n-2; i>=0; i--)
            s[i]= arr[i]+s[i+1];
         
        for(int i=0; i<n; i++){
            if(p[i]==s[i])
             return i;
        }
        
        return -1;
        
    }
};
int main() {
    return 0;
}