#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin>>n>>k;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin>>v[i];
    long long sum = 0;
    for(int i = 0; i < k; i++) sum += v[i];

    long long minSum = sum;
    int ans = 1;
    for(int i = k; i < n; i++){
        sum += v[i];
        sum -= v[i-k];
        if(sum < minSum){
            minSum = sum;
            ans = i - k + 2;
        }
    }
    cout<<ans<<endl;
}