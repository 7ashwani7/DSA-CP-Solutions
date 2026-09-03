#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void combination(vector<vector<int>>& ans, vector<int> v, vector<int>& candidates, int target, int idx) {
        if(target == 0){
            ans.push_back(v);
            return;
        }
        if(target < 0) return;
        for(int i = idx; i < candidates.size(); i++){
            if(i > idx && candidates[i] == candidates[i-1]) continue;
            if(candidates[i] > target) break;
            v.push_back(candidates[i]);
            combination(ans, v, candidates, target-candidates[i], i+1);
            v.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> ans;
        vector<int> v;
        combination(ans, v, candidates, target, 0);
        return ans;
    }
};
// OR 
class Solution {
public:
    vector<vector<int>> ans;
    void f(vector<int>& cand , int t , int idx , vector<int> &v){
        if(t == 0){
            ans.push_back(v);
            return;
        }
        if(idx == cand.size()) return;
        if(cand[idx] <= t){
            v.push_back(cand[idx]);
            f(cand , t-cand[idx] , idx+1 , v);
            v.pop_back();
        }
        int j = idx+1;
        while(j < cand.size() && cand[j] == cand[j-1]) j++;
        f(cand , t , j , v);
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<int> v;
        f(candidates, target, 0 , v);
        return ans;
    }
};
int main() {
    return 0;
}
