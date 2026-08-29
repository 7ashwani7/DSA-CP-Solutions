#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numRabbits(vector<int>& ans) {
        int n = ans.size();
        unordered_map<int,int> mp;
        int res = 0;
        for(int i=0; i<n; i++){
            if(!mp[ans[i]+1]){
                res += ans[i]+1;
                if(ans[i]==0) continue;
                mp[ans[i]+1] = 1;
            }
            else{
                mp[ans[i]+1]++;
                int key = ans[i]+1;
                int val = mp[key];
                if(key == val) mp.erase(key);
            }
        } 
        return res;
    }
};
int main() {
    return 0;
}