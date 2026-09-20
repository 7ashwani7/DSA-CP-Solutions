#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        int n = nums.size();
        if(n < 3) return -1;

        unordered_map<int, pair<int,int>> mp;
        int mi = INT_MAX;

        for(int i = 0; i < n; i++){
            if(mp.find(nums[i]) != mp.end()){
                auto &p = mp[nums[i]];

                if(p.second != -1){
                    mi = min(mi, 2 * (i - p.second));
                }

                p.second = p.first;
                p.first = i;
            } else {
                mp[nums[i]] = {i, -1};
            }
        }

        return mi == INT_MAX ? -1 : mi;
    }
};
int main() {
    return 0;
}