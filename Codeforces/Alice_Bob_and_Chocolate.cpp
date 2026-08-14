#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin>>v[i];
    long long leftSum = 0;
    long long rightSum = 0;
    int i = 0, j = n-1;
    while(i <= j){
        if(leftSum <= rightSum){
            leftSum += v[i];
            i++;
        }else{
            rightSum += v[j];
            j--;
        }
    }
    cout<<i<<" "<<n-i<<endl;
}