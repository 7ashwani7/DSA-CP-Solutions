#include <bits/stdc++.h>
using namespace std;
// User function Template for C++

class Solution {
  public:
    vector<int> increment(vector<int> arr, int N) {
        // code here
        int n=arr.size();
        for(int i=n-1; i>=0; i--){
           if(arr[i]!=9){
               arr[i]+=1;
               return arr;
            } 
            arr[i] = 0;
            if (i == 0) {
                arr.insert(arr.begin(), 1);
                return arr;
            }
        }
        return arr;  
    }
};
int main() {
    return 0;
}