#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        // Code Here
        int n = arr.size();
        int i = 0 , j=n-1;
        while(i<j){
            int mid = (i+j)/2;
            
            if(arr[mid]>arr[j]){
                i=mid+1;
                
            } else {
                j=mid;
            }
        }
        
        return i;
        
    }
};
int main() {
    return 0;
}
