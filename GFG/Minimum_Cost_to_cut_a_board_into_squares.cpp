#include <bits/stdc++.h>
using namespace std;
    bool cmp(int a, int b){
        return a > b;
    }
class Solution {
  public:
    int minCost(int n, int m, vector<int>& x, vector<int>& y) {
        //  code here
        sort(x.begin(), x.end(), cmp);
        sort(y.begin(), y.end(), cmp);
        int hz = 1, vr = 1;
        int i = 0, j = 0;
        int ans = 0;
        while(i < x.size() && j < y.size()){
            if(x[i] > y[j]){
                ans += x[i] * vr;
                hz++;
                i++;
            }
            else{
                ans += y[j] * hz;
                vr++;
                j++;
            }
        }
        while(i < x.size()){
            ans += x[i] * vr;
            hz++;
            i++;
        }
        while(j < y.size()){
            ans += y[j] * hz;
            vr++;
            j++;
        }
        return ans;
    }
};
int main() {
    return 0;
}