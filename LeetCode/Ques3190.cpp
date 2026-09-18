#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int oper = 0;
        for (int x : nums) {
            if (x % 3 != 0) {
                oper++;
            }
        }
        return oper;
    }
};
int main() {
    return 0;
}