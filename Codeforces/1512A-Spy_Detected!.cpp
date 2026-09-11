#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        unordered_map<int,int> mp;
        int ans=0;
        for(int i = 0; i < n; i++){
            int x;
            cin>>x;
            v[i] = x;
            mp[x]++;
        }
        for(int i = 0; i < n; i++){
            if(mp[v[i]] == 1){
                ans = i + 1;
                break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}