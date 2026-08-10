#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    queue<int> reverseFirstK(queue<int> q, int k) {
        // code here
        int n = q.size();
        int i = n-k;
        if(n<k) return q;
        stack<int> st;
        while(k--){
            st.push(q.front());
            q.pop();
        }
        while(st.size()>0){
            q.push(st.top());
            st.pop();
        }
        while(i--){
            q.push(q.front());
            q.pop();
        }
        return q;
    }
};
int main() {
    return 0;
}