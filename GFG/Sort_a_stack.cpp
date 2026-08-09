#include <bits/stdc++.h>
using namespace std;
// Time Complexity: O(nlogn) + O(n) = O(nlogn)
// Space Complexity: O(n) for the vector used to store stack elements
class Solution {
  public:
    void sortStack(stack<int> &st) {
        // code here
        vector<int> ans;
        while(st.size()>0){
            ans.push_back(st.top());
            st.pop();
        }
        sort(ans.begin(),ans.end());
        for(int i=0; i<ans.size(); i++){
            int temp = ans[i];
            st.push(temp);
        }
    }
};
// Recursive approach 
// Time Complexity: O(n^2)
// Space Complexity: O(n) for the recursive stack
class Solution {
  public:
    void insert(stack<int>& st, int x){
        if (st.empty() || st.top() <= x) {
            st.push(x);
            return;
        }
        int temp = st.top();
        st.pop();
        insert(st, x);
        st.push(temp);
    }

    void sortStack(stack<int> &st) {
        if (st.empty()) return;
        int x = st.top();
        st.pop();
        sortStack(st);
        insert(st, x);
    }
};
int main() {
    return 0;
}