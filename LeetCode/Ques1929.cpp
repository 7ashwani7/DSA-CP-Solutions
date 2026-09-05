#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> getConcatenation(vector<int>& v) {
        int n = v.size();
        vector<int> ans(2*n);
        for(int i=0; i<2*n; i++){
            if(i<n)
            ans[i]= v[i];
            else
            ans[i]= v[i-n];

        }
        return ans;
        
    }
};
int main() {
    return 0;
}