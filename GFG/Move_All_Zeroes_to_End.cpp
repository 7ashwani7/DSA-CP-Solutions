#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        // code here
        int n=arr.size();
        int pos=0;
        for(int i=0; i<n; i++){
            if(arr[i] != 0){
               arr[pos]=arr[i];
               pos++;
            }
            
        }
        for(int i=pos; i<n; i++)
         arr[i]=0;
    }
};
int main() {
    return 0;
}