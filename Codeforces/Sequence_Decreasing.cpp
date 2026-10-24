#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){ 
        int n;
        cin>>n;
        vector<int> a(n);
        int mi = 2e9;
        bool flag = false;
        for(int i=0; i<n; i++){
            cin>>a[i];
            if(a[i] == 0) flag = true;
            mi = min(mi, a[i]);
        }
        if(flag){
            cout<<n<<endl;
        }
        else{
            if(n >= mi + 1){
                cout<<n<<endl;
            }
            else{
                cout<<0<<endl;
            }
        }
    }
    return 0;
}