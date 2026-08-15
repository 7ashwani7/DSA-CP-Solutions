#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        unordered_map<int, int> mp;
        for(int ele : arr){
            ele = ((ele % k) + k) % k;
            mp[ele]++;
        }
        if(mp.find(0) != mp.end()) {
            if(mp[0] % 2 != 0) return false;
            mp.erase(0);
        }
        if(k % 2 == 0 && mp.find(k / 2) != mp.end()){
            if(mp[k / 2] % 2 != 0) return false;
            mp.erase(k / 2);
        }
        for(auto x : mp){
            int rem = x.first;
            int comp = k - rem;
            if(mp.find(comp) == mp.end()) return false;
            if(mp[rem] != mp[comp]) return false;
        }
        return true;
    }
};
int main() {
    return 0;
}