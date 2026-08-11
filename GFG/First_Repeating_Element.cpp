#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int firstRepeated(vector<int> &arr) {
        unordered_map<int,int> mp;
        
        for(int x : arr){
            mp[x]++;
        }
        
        for(int i = 0; i < arr.size(); i++){
            if(mp[arr[i]] > 1){
                return i + 1;
            }
        }
        
        return -1;
    }
};
int main() {
    return 0;
}