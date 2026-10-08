#include <bits/stdc++.h>
using namespace std;
bool comp(const string& a, const string& b) { return a + b > b + a; }
class Solution {
public:
    string largestNumber(vector<int>& nums) {
        int n = nums.size();
        vector<string> v(n);
        for (int i = 0; i < n; i++) {
            v[i] = to_string(nums[i]);
        }
        sort(v.begin(), v.end(), comp);
        if (v[0] == "0") {
            return "0";
        }
        string ans;
        for (string& s : v) {
            ans += s;
        }
        return ans;
    }
};
int main() {
    return 0;
}