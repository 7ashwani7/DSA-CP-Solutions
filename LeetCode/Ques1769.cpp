#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n = boxes.size();
        vector<int> ans(n, 0);

        int count = 0, ops = 0;
        for(int i = 0; i < n; i++){
            ans[i] += ops;
            if(boxes[i] == '1') count++;
            ops += count;
        }
        count = 0, ops = 0;
        for(int i = n - 1; i >= 0; i--){
            ans[i] += ops;
            if(boxes[i] == '1') count++;
            ops += count;
        }

        return ans;
    }
};
int main() {
    return 0;
}