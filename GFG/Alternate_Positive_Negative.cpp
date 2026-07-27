#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void rearrange(vector<int> &arr) {
        int n = arr.size();
        
        vector<int> pos, neg;
        
        for(int x : arr){
            if(x >= 0) pos.push_back(x);
            else neg.push_back(x);
        }
        
        int i = 0, p = 0, ne = 0;
        
        while(p < pos.size() && ne < neg.size()){
            arr[i++] = pos[p++];
            arr[i++] = neg[ne++];
        }
    
        while(p < pos.size()) arr[i++] = pos[p++];
        while(ne < neg.size()) arr[i++] = neg[ne++];
    }
};
int main() {
    return 0;
}