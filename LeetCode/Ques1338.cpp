#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minSetSize(vector<int>& arr) {
        int n = arr.size();
        unordered_map<int, int> mp;
        vector<int> freq;
        for (auto& x : arr) {
            mp[x]++;
        }
        for (auto& x : mp) {
            freq.push_back(x.second);
        }
        sort(freq.rbegin(), freq.rend());
        int removed = 0;
        int count = 0;
        for (auto& x : freq) {
            removed += x;
            count++;
            if (removed >= n / 2) {
                return count;
            }
        }
        return 0;
    }
};
int main() {
    return 0;
}