#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool checkString(string s) {
        int n = s.size();
        for(int i=1; i<n; i++){
            if(s[i-1]-s[i]==1)
                return false;
        }

        return true;
        
    }
};
int main() {
    return 0;
}