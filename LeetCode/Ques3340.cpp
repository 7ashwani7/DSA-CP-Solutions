#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isBalanced(string num) {
        int n= num.length();
        int es=0, os=0;
        for(int i=0; i<n; i++){
            if(i%2==0){
                es+=(num[i] -'0');
            }
            else{
                os+=(num[i] -'0');
            }
        }
        if(es==os) return true;
        else return false;
        
    }
};
int main() {
    return 0;
}