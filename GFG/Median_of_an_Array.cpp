#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    double findMedian(vector<int> &arr) {
        // code here.
        int n= arr.size();
        sort(arr.begin(), arr.end());
        double med =0;
        if((n)%2==0)
            med= (arr[((n)/2-1)] + arr[((n)/2)])/2.0;
        else med= (arr[(n)/2])/1.0;
        
        return med;
    }
};
int main() {
    return 0;
}