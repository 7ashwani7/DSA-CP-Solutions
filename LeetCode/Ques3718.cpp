#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int> st(nums.begin(), nums.end());
        int i = 1;
        while(true){
            if(!st.count(k * i)){
                return (k * i);
            }
            i++;
        }
    }
};
int main() {
    return 0;
}