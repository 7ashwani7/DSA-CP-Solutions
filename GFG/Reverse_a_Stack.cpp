#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    void reverseStack(stack<int> &st) {
        // code here
       stack<int> temp;
        while(st.size()>0){
            temp.push(st.top());
            st.pop();
        }
        st = temp;
    }
};
int main() {
    return 0;
}