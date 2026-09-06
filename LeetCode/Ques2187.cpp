#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool check(long long mid, vector<int>& time, int t){
        long long count=0;
        int n=time.size();
        for(int i=0;i<n;i++){
            count+=mid/(long long)time[i];
        }
        if(count<(long long)t) return false;
        else return true;
    }
    long long minimumTime(vector<int>& time, int t) {
        int n=time.size();
        int mx=-1;
        for(int i=0;i<n;i++){
            mx=max(mx,time[i]);
        }
        long long lo=1;
        long long ans=-1;
        long long hi=(long long)mx*(long long)t;
        while(lo<=hi){
            long long mid=lo+(hi-lo)/2;
            if(check(mid,time,t)==true){
                ans=mid;
                hi=mid-1;
            }
            else{
                lo=mid+1;
            }
        }
        return ans;
    }
};
int main() {
    return 0;
}