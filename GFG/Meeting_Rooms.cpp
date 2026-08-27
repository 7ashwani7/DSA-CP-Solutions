#include <bits/stdc++.h>
using namespace std;
bool cmp(vector<int> &a, vector<int> &b) {
    return a[1] < b[1];
}
class Solution {
  public:
    bool canAttend(vector<vector<int>> &arr) {
        // Code Here
        sort(arr.begin(), arr.end(), cmp);
        int endTime = arr[0][1];
        for(int i=1; i<arr.size(); i++){
            if(arr[i][0] < endTime) return false;
            else  endTime = arr[i][1];
        }
        return true;
    }
};
int main() {
    return 0;
}