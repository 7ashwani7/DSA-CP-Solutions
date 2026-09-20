#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int firstMatchingIndex(string s) {
        int n = s.size();
        int i=0, j=n-i-1;
        while(i<=j){
            if(s[i]==s[j])
                return i;
            i++;
            j--;
        }
        return -1;
        
    }
};
int main() {
    return 0;
}