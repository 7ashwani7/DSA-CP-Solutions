#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n <= 3){
            cout<<-1<<endl;
            continue;
        }
        vector<int> p(n + 1);
        for(int i = 1; i <= n; i++){
            p[i] = i;
        }
        swap(p[1], p[4]);
        for(int i = 1; i <= n; i++){
            cout<<p[i]<<(i == n ? "" : " ");
        }
        cout<<endl;
    }
    return 0;
}