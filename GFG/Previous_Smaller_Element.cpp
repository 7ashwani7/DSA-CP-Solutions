#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<int> prevSmaller(vector<int>& arr) {
        //  code here
        int n = arr.size();
        vector<int> ans(n);
        stack<int> st;
        ans[0] = -1;
        st.push(arr[0]);
        for(int i=1; i<n; i++){
            while(st.size()>0 && st.top() >= arr[i]) st.pop();
            if (st.size()==0) ans[i] = -1;
            else ans[i] = st.top();
            st.push(arr[i]);
        }
        return ans;
    }
};
int main() {
    return 0;
}