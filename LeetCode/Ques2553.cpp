#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<string> s;
        vector<int> ans;
        for(auto val : nums){
            s.push_back(to_string(val));
        }
        for(auto val : s){
            for(int i=0; i<val.size(); i++){
                ans.push_back((val[i] - '0'));
            }
        }
        return ans;
    }
};
//OR
class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans;

        for (int num : nums) {

            vector<int> temp;

            while (num > 0) {
                temp.push_back(num % 10);
                num /= 10;
            }

            reverse(temp.begin(), temp.end());

            for (int digit : temp) {
                ans.push_back(digit);
            }
        }

        return ans;
    }
};
int main() {
    return 0;
}