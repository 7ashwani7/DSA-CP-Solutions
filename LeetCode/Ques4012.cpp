#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> countTasks(vector<int>& t, vector<int>& s) {
        int n = t.size();
        int m = s.size();
        vector<int> ans;
        ans.reserve(m);
        vector<long long> p(n);
        p[0] = t[0];
        for(int i = 1; i < n; i++){
            p[i] = p[i-1]+t[i];
        }
        long long sum = p.back();
        long long work = 0;
        for(int i = 0; i < m; i++){
            work += s[i];
            if(work >= sum){
                ans.push_back(0);
                work = 0;
            }
            else{
                int idx = upper_bound(p.begin(), p.end() , work)- p.begin();
                ans.push_back(n-idx);
            }
        }
        return ans;
    }
};
int main() {
    return 0;
}