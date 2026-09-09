#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void fS(vector<bool>& S){
        int n = S.size()-1;
        for(int i=2; i<=sqrt(n); i++){
            for(int j=i*2; j<=n; j+=i){
                S[j]=0;
            }
        }
    }
    int distinctPrimeFactors(vector<int>& nums) {
        int n= nums.size();
        int mx=-1;
        for(int i=0; i<n; i++){
            mx=max(mx,nums[i]);
        }
        vector<bool> S(mx+1,1);
        if(mx+1>0) S[0]=0;
        if(mx+1>1) S[1]=0;
        fS(S);
        vector<int> prime;
        for(int i=2; i<=mx; i++){
            if(S[i]==1) prime.push_back(i);

        }
        vector<bool> taken(prime.size(),0);
        for(int i=0; i<nums.size(); i++){
            int ele= nums[i];
            for(int j=0; j<prime.size(); j++){
                if(prime[j]>ele) break;
                if(ele%prime[j]==0) taken[j]=1;

            }
        }
        int count=0;
        for(int i=0; i<taken.size(); i++){
            if(taken[i]==1) count++;

        }
        return count;
    }
};
int main() {
    return 0;
}