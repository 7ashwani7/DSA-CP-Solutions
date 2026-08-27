#include <bits/stdc++.h>
using namespace std;
bool cmp(vector<int> &a , vector<int> &b){
    return a[1] > b[1];
}
class Solution {
public:
    int maximumUnits(vector<vector<int>>& arr, int s) {
        sort(arr.begin(),arr.end(), cmp);
        int ans = 0;
        for(int i=0; i<arr.size(); i++){
            if(arr[i][0]<=s){
                ans += arr[i][0]*arr[i][1];
                s -= arr[i][0];
            }
            else{
                ans += s*arr[i][1];
                s = 0;
            }
            if(s==0) break;
        }
        return ans;
    }
};
int main() {
    return 0;
}