#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    void pb(deque<int>& dq, int x) {
        // code here
        dq.push_back(x);
    }

    // Pop element from the back
    void ppb(deque<int>& dq) {
        if (!dq.empty())
            dq.pop_back();
    }

    // Return front element
    int front_dq(deque<int>& dq) {
        if (dq.empty())
            return -1;
        return dq.front();
    }

    // Push element at the front
    void pf(deque<int>& dq, int x) {
        dq.push_front(x);
    }
};
int main() {
    return 0;
}
