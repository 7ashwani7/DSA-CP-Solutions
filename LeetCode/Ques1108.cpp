#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string defangIPaddr(string address) {
        string s = "";
        int n= address.size();
        for(int i=0; i<n; i++){
            if(address[i]=='.'){
                s+='[';
                s+= '.';
                s+=']';
            } else{
                s+=address[i];
            }
        }
        return s;

    }
};
int main() {
    return 0;
}