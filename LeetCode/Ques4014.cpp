#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    double minPrice(vector<int>& p, vector<int>& d) {
        sort(p.begin(), p.end(), greater<int>());
        sort(d.begin(), d.end(), greater<int>());
        double ans = 0.0;
        int n = min(p.size(), d.size());
        for(int i = 0; i < n; i++){
            ans += (p[i] * (100.0 - d[i]) / 100.0);
        }
        for(int i = n; i < p.size(); i++){
            ans += p[i];
        }
        return ans;
    }
};
int main() {
    return 0;
}