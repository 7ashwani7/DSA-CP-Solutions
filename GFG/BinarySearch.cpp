#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int binarysearch(vector<int> &arr, int k) {
        // code here
        int n =arr.size();
        int i=0, j= n-1;
        int idx=-1;
        while(i<=j){
            int mid = (i+j)/2;
        
            if(arr[mid]==k){
                idx=mid;
                j=mid-1;
            } 
            else if(arr[mid]>k) 
                j= mid-1;
                
            else i=mid+1;
            
            
        }
        
        return idx;
    }
};
int main() {
    return 0;
}