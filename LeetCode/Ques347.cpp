#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> freq;
        for (int num : nums) {
            freq[num]++;
        }
        vector<vector<int>> temp(n + 1);
        for (auto &it : freq) {
            temp[it.second].push_back(it.first);
        }
        vector<int> ans;
        for (int i = n; i >= 1; i--) {
            for (int num : temp[i]) {
                ans.push_back(num);
                if (ans.size() == k) {
                    return ans;
                }
            }
        }

        return ans;
    }
};
// OR 
class Solution {
public:
    typedef pair<int, int> pi;
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        for(int num : nums){
            freq[num]++;
        }
        // Min Heap: {frequency, element}
        priority_queue<pi,vector<pi>, greater<pi>> pq;
        for(auto &it : freq){
            pq.push({it.second, it.first});
            if(pq.size() > k) pq.pop();
        }
        vector<int> ans;
        while(pq.size()>0) {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
int main() {
    return 0;
}