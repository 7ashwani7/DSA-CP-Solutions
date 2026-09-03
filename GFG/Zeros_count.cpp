#include <bits/stdc++.h>
using namespace std;
// User function template for C++

class Solution {
  public:
    int countZeroes(int arr[], int n) {
        // code here
        int count=0;
        int i=0, j=n-1;
        while(i<=j){
            int mid = (i+j)/2;
            if(arr[mid]==0){
                count++;
                j--;
                
            } else{
                i=mid+1;
            }
        }
        return count;
    }
};
int main() {
    return 0;
}