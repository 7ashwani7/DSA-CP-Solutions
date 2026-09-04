#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minimumPushes(string word){
        vector<int> freq(26, 0);
        for(char c : word) freq[c-'a']++;
        sort(freq.rbegin(),freq.rend());
        int ans = 0;
        for(int i=0;i<26;i++){
            if(freq[i] == 0) break;
            int x = (i/8)+1;
            ans += freq[i] * x;
        }
        return ans;
    }
};
// OR
class Solution {
public:
    int minimumPushes(string word) {
        unordered_map<char, int> mp;
        for(char c : word) mp[c]++;
        priority_queue<int> pq;
        for(auto &x : mp) pq.push(x.second);
        int ans = 0;
        int count = 0;
        while(pq.size() > 0){
            int f = pq.top();
            pq.pop();
            if(count < 8) ans += f;
            else if(count < 16) ans += 2 * f;
            else if(count < 24) ans += 3 * f;
            else ans += 4 * f;
            count++;
        }
        return ans;
    }
};
int main() {
    return 0;
}