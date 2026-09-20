#include <bits/stdc++.h>
using namespace std;
int main(){
    long long k, n, w;
    cin>>k>>n>>w;
    long long total_cost = k * w * (w + 1) / 2;
    cout<<max(0LL, total_cost - n);
    return 0;
   
}