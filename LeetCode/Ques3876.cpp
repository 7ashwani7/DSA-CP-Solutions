#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool uniformArray(vector<int>& v) {
        int n = v.size();
        int m = *min_element(v.begin(), v.end());
        if(m%2==0){
            for(int i=0; i<n; i++){
                if(v[i]%2!=0) return false;
                
            }
        }
        
        return true;
    }
};
int main() {
    return 0;
}