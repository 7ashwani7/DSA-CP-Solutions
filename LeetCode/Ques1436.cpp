#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string destCity(vector<vector<string>>& p) {
        int n = p.size();
        unordered_map<string, int> mp;
        for (int i=0;i<n;i++){
            mp[p[i][0]]++;
        }
        for(int i=0;i<n;i++){
            if(mp.count(p[i][1]) == 0){
                return p[i][1];
            }
        }
        return "";
    }
};
int main() {
    return 0;
}