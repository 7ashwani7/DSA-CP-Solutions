#include <bits/stdc++.h>
using namespace std;

int main() {
    int  t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int h = n/2;
        int l = n-h;
        cout<<l * h<<endl;
    }
    return 0;
}