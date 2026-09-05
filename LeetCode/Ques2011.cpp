#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int finalValueAfterOperations(vector<string>& oper) {
        int sum=0;
        for(auto c : oper ){
            if(c=="++X" || c=="X++"){
                sum+=1;
            } else{
                sum-=1;
            }
        }
        return sum;
    }
};
int main() {
    return 0;
}