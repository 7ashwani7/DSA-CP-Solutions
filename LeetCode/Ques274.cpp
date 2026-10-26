#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n = citations.size();
        sort(citations.begin(), citations.end());
        for(int i = 0; i < n; i++){
            int idx = n - i;
            if(citations[i] >= idx) return idx;
        }
        return 0;
    }
};
int main() {
    return 0;
}