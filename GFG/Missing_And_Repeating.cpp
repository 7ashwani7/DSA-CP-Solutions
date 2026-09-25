#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        // code here
        int r = -1, m = -1;
        for(int i = 0; i < arr.size(); i++){
            int idx = abs(arr[i]) - 1;
            if(arr[idx] < 0) r = abs(arr[i]);
            else arr[idx] = -arr[idx];
        }
        for(int i = 0; i < arr.size(); i++){
            if (arr[i] > 0) {
                m = i + 1;
                break;
            }
        }
        return {r, m};
    }
};
int main() {
    return 0;
}