#include <bits/stdc++.h>
using namespace std;
class SpecialStack {
  public:
    stack<long long> st;
    long long mn;
    SpecialStack() {
        // Define Stack
        mn = LLONG_MAX;
    }

    void push(int x) {
        // Add an element to the top of Stack
        long long val = x;
        if (st.empty()) {
            st.push(val);
            mn = val;
        }
        else if (val >= mn) {
            st.push(val);
        }
        else {
            st.push(2 * val - mn);
            mn = val;
        }
    }

    void pop() {
        // Remove the top element from the Stack
        if (st.empty()) return;
        if (st.top() < mn) {
            mn = 2 * mn - st.top();
        }
        st.pop();
        if (st.empty()) {
            mn = LLONG_MAX;
        }
    }

    int peek() {
        // Returns top element of the Stack
        if (st.empty()) return -1;
        if (st.top() < mn) return (int)mn;
        return (int)st.top();
    }

    bool isEmpty() {
        // Check if stack is empty
        return st.empty();
    }

    int getMin() {
        // Finds minimum element of Stack
        if (st.empty()) return -1;
        return (int)mn;
    }
};
int main() {
    return 0;
}