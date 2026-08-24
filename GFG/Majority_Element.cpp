#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int majorityElement(vector<int>& arr) {
        // code here
        int n= arr.size();
        unordered_map<int, int> freq;

        for (int x : arr) {
            freq[x]++;
        }
        for (auto it : freq) {
            if(it.second > (n/2))
              return it.first;
        }
        return -1;
    }
};
int main() {
    return 0;
}