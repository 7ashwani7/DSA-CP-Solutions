#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool canSplit(vector<int>& arr) {
        int total = 0;
        for(int x : arr) total += x;

        int prefix = 0;
        for(int i = 0; i < arr.size() - 1; i++){
            prefix += arr[i];

            if(prefix == total - prefix){
                return true;
            }
        }

        return false;
    }
};
// OR
class Solution {
  public:
    bool canSplit(vector<int>& arr) {
        // code here
        int n = arr.size();
        for(int i=1; i<n; i++){
            arr[i] = arr[i] + arr[i-1];
        }
        int sum = 0;
        for(int i=n-1; i>=0; i--){
            int j= i-1;
            if(sum +(arr[i]-arr[j]) == arr[j]){
              return true;
            }
            sum+=(arr[i]-arr[j]);
        }
        return false;
    }
};
int main() {
    return 0;
}
