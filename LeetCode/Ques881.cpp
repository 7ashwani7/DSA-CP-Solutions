#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numRescueBoats(vector<int>& arr, int l) {
        int n = arr.size();
        sort(arr.begin(),arr.end());
        int i = 0, j = n-1;
        int ans = 0;
        while(i<=j){
            if(arr[i]+arr[j] <= l){
                ans++;
                i++;
                j--;
            }
            else{
                ans++;
                j--;
            }
        }
        return ans;
    }
};
int main() {
    return 0;
}