#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        int n = nums.size();
        if(n<3) return -1;
        unordered_map<int , vector<int>> ans;
        for(int i = 0; i <n; i++){
            ans[nums[i]].push_back(i);
        }
        int mi = INT_MAX;
        for(auto &a : ans){
            vector<int> &v = a.second;
            int s = v.size();

            if(s >= 3){
                for(int i = 0; i + 2 < s; i++){
                    int sum = 2 * (v[i+2] - v[i]);
                    mi = min(mi, sum);
                }
            }
        }
        return (mi == INT_MAX) ? -1 : mi;
    }
};
// OR
class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        int n=nums.size(),mini=1e9;

        for(int i=0;i<n-2;i++){
            for(int j=i+1;j<n-1;j++){
                for(int k=j+1;k<n;k++){
                    if(nums[i]==nums[j] && nums[j]==nums[k]){
                        int dist=abs(i-j)+abs(j-k)+abs(k-i);
                        mini=min(mini,dist);
                    }
                }
            }
        }

        return mini==1e9?-1:mini;
    }
};
int main() {
    return 0;
}