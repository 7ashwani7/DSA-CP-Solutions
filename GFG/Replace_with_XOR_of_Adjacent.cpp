#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    void replaceElements(vector<int>& arr) {
        // code here
        int n = arr.size();
        int temp1 = arr[0];
        arr[0] = arr[0] ^ arr[1];
        for(int i=1; i<n-1; i++){
            int temp2 = arr[i];
            arr[i] = temp1 ^ arr[i+1];
            temp1 = temp2;
        }
        arr[n-1] = temp1 ^ arr[n-1];
    }
};
int main() {
    return 0;
}