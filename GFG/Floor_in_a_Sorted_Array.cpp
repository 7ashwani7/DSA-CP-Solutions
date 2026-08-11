#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int findFloor(vector<int>& arr, int x) {
        // code here
        int n= arr.size();
        int idx=-1;
        for(int i=0; i<n; i++){
            if(arr[i]<=x)
            idx=i;
        }
        return idx;
    }
};
int main() {
    return 0;
}
