#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    vector<long long> v(n-1);
    long long curr_sum = 0;
    for(int i = 0; i < n-1; i++){
        cin>>v[i];
        curr_sum += v[i];
    }
    long long sum = n*(n+1) / 2;
    cout<<sum-curr_sum<<endl;
}