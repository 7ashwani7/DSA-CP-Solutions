#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    bool binarySearch(vector<int>& arr, int k) {
        // code here
        int n = arr.size();
        int low = 0, high = n-1;
        while(low <= high){
            int mid = low + (high - low) / 2;
            if(arr[mid] == k) return true;
            else if(arr[mid] > k) high = mid - 1;
            else low = mid + 1;
        }
        return false;
    }
};
int main() {
    return 0;
}