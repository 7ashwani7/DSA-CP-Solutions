#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> commonElements(vector<int> &a, vector<int> &b, vector<int> &c) {
        vector<int> ans;
        int i = 0, j = 0, k = 0;
        int last = INT_MIN;

        while (i < a.size() && j < b.size() && k < c.size()) {
            if (a[i] == b[j] && b[j] == c[k]) {
                if (a[i] != last) {
                    ans.push_back(a[i]);
                    last = a[i];
                }
                i++;
                j++;
                k++;
            }
            else if (a[i] < b[j]) {
                i++;
            }
            else if (b[j] < c[k]) {
                j++;
            }
            else {
                k++;
            }
        }

        return ans;
    }
};
int main() {
    return 0;
}