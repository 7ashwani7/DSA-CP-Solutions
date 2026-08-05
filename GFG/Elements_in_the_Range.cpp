#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    bool checkElements(int start, int end, vector<int> &arr) {
        // Your code goes here
        int n = arr.size();
        int count=0;
        for(int i=0; i<n; i++){
            if(arr[i]>= start && arr[i]<=end) count++;
        }
        return (end-start+1)==count;
    }
};
int main() {
    return 0;
}