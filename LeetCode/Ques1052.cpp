#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxSatisfied(vector<int>& cust, vector<int>& grumpy, int k) {
        int n=cust.size();
        int prevLoss=0;
        for(int i=0;i<k;i++){
            if(grumpy[i]==1) prevLoss += cust[i];
        }
        int maxLoss=prevLoss;
        int maxIdx=0;
        int i=1;
        int j=k;
        while(j<n){
            int currLoss=prevLoss;
            if(grumpy[j]==1) currLoss += cust[j];
            if(grumpy[i-1]==1) currLoss -=cust[i-1];
            if(maxLoss<currLoss){
               maxLoss=currLoss;
               maxIdx=i; 
            }
            prevLoss=currLoss;
            i++;
            j++;
        }
        for(int i=maxIdx;i<maxIdx+k;i++){
            grumpy[i]=0;
        }
        int sum=0;
        for(int i=0;i<n;i++){
            if(grumpy[i]==0) sum += cust[i];
        }
        return sum;
    }
};
int main() {
    return 0;
}