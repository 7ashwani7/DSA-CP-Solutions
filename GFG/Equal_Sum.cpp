#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    string equilibrium(vector<int> &arr) {
        // code here
        int n = arr.size();
        int sum = 0;
        for(int i = 0; i < n; i++){
            sum += arr[i];
        }
        for(int i = 1; i < n; i++){
            arr[i] += arr[i-1]; 
        }
        for(int i = 1; i < n; i++){
            int right = sum - arr[i];
            if(right == arr[i-1]) return "true";
        }
        return "false";
    }
};
int main() {
    return 0;
}