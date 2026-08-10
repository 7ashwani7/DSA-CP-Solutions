#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int transitionPoint(vector<int>& arr) {
        // code here
        int n= arr.size();
        if(arr[0]==1) return 0;
        for(int i=1; i<n; i++){
            if(arr[i]==1)
                return i;
        }
        return -1;
    }
};
int main() {
    return 0;
}