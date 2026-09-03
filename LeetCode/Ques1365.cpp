#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans, temp;
        unordered_map<int,int> mp;

        temp = nums;
        sort(temp.begin(), temp.end());

        for(int i = 0; i < n; i++){
            if(mp.find(temp[i]) == mp.end()){
                mp[temp[i]] = i;
            }
        }

        for(int i = 0; i < n; i++){
            ans.push_back(mp[nums[i]]);
        }

        return ans;
    }
};
// OR
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> count(101, 0);

        for(int x : nums) count[x]++;

        for(int i = 1; i <= 100; i++)
            count[i] += count[i - 1];

        vector<int> ans;
        for(int x : nums){
            if(x == 0) ans.push_back(0);
            else ans.push_back(count[x - 1]);
        }

        return ans;
    }
};
int main() {
    return 0;
}