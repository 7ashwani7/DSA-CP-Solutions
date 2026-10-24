#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        vector<int> a(n);
        vector<int> count(n+2, 0);
        for(int i=0; i<n; i++){
            cin>>a[i];
            if(a[i] <= n+1) count[a[i]]++;
        }
        int sum = 0;
        int ans = 0;
        for(int i = 0; i < n+2; i++){
            if(count[i] < 1){
                break;
            }
            sum += count[i];
            if(sum < (i+1) * k){
                break;
            }
            ans = i+1;
        }
        cout<<ans<<endl;
    }
}