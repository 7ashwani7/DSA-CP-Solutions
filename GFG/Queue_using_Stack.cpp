#include <bits/stdc++.h>
using namespace std;
class myQueue {
    stack<int> s1, s2;

  public:
    myQueue() {
        // Initialize your data members
    }
    void enqueue(int x) {
        // Implement enqueue operation
        s1.push(x);
    }
    void dequeue() {
        // Implement dequeue operation
        if (s2.empty()) {
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }
        if (!s2.empty()) {
            s2.pop();
        }
    }
    int front() {
        // Implement front operation
        if (s2.empty()) {
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }
        return s2.empty() ? -1 : s2.top();
    }
    int size() {
        // Implement size operation
        return s1.size() + s2.size();
    }
};
int main() {
    return 0;
}