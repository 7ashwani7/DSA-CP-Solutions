#include <bits/stdc++.h>
using namespace std;

bool t_prime(long long x){
    if(x < 4) return false;
    long long root = sqrt(x);
    if(root * root != x) return false;
    for(long long i = 2; i <= sqrt(root); i++){
        if(root % i == 0)
            return false;
    }
    return true;
}
int main(){
    long long n;
    cin>>n;
    while(n--){
        long long x;
        cin>>x;
        if(t_prime(x)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}