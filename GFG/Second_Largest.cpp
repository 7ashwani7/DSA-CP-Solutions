#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int mx1 = INT_MIN;
        int mx2 = INT_MIN;
        for(int i=0; i<arr.size(); i++){
            if(mx1 < arr[i]){
                mx2 = mx1;
                mx1 = arr[i];
            }
            else if(arr[i] > mx2 && arr[i] != mx1) {
                mx2 = arr[i];
            }
        }
        return (mx2 == INT_MIN) ? -1 : mx2;
    }
};
int main() {
    return 0;
}