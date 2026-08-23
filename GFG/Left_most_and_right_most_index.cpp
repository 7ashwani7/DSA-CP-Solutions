#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    pair<long, long> indexes(vector<long long> arr , long long x) {
        // code here
        int n =arr.size();
        int i=0, j= n-1;
        int idx1=-1;
        int idx2=-1;
            while(i<=j){
                int mid = (i+j)/2;
            
                if(arr[mid]==x){
                    idx1=mid;
                    j=mid-1;
                }
                
                else if(arr[mid]>x){
                    j= mid-1;
                } 
                    
                    
                else {
                    i=mid+1;
                }
                
                
            }
            i=0, j= n-1;
            while(i<=j){
                int mid = (i+j)/2;
            
                if(arr[mid]==x){
                    idx2=mid;
                    i= mid+1;
                }
                
                else if(arr[mid]>x){
                    j= mid-1;
                } 
                    
                    
                else {
                    i=mid+1;
                }
                
                
            }
        
        return {idx1,idx2};
    }
    
};
int main() {
    return 0;
}