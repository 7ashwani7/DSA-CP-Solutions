#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int count=0;
        unordered_map<int,int> mp;
        for(auto x: nums){
            mp[x]++;
        }
        for(auto x : mp){
            if(x.second >1){
                int n = x.second;
                count+= n*(n-1) / 2;
            }
        }
        return count;
        
    }
};
int main() {
    return 0;
}