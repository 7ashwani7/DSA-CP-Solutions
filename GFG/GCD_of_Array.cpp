#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int gcd(int a , int b){
        if(b == 0) return a;
        return gcd(b , a % b);
    }
    int gcd(int n, vector<int> arr) {
        // Your code goes here
        int ans = 0;
        for(int i = 0; i < n; i++){
            ans = gcd(ans , arr[i]);
        }
        return ans;
    }
};

int main() {
    return 0;
}