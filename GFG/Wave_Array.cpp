#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    void sortInWave(vector<int>& arr) {
        // code here
        int n = arr.size();
        for(int i = 1; i < n; i+=2){
            swap(arr[i-1], arr[i]);
        }
    }
};
int main() {
    return 0;
}