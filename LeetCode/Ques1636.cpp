#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    typedef pair<int, int> pi;
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int, int> freq;
        for(int num : nums){
            freq[num]++;
        }
        // Min Heap: {frequency, element}
        priority_queue<pi,vector<pi>, greater<pi>> pq;
        for(auto &it : freq){
            pq.push({it.second, -it.first});
        }
        vector<int> ans;
        while(pq.size()>0){
            int k = pq.top().first;
            while(k--){
                ans.push_back(-pq.top().second);
            }
            pq.pop(); 
        }
        return ans;
    }
};
int main() {
    return 0;
}