#include <bits/stdc++.h>
using namespace std;
class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
class myStack {
    Node* topNode;
    int cnt;

  public:
    myStack() {
        topNode = nullptr;
        cnt = 0;
    }

    bool isEmpty() {
        return topNode == nullptr;
    }

    void push(int x) {
        Node* newNode = new Node(x);
        newNode->next = topNode;
        topNode = newNode;
        cnt++;
    }

    void pop() {
        if (isEmpty()) return;

        Node* temp = topNode;
        topNode = topNode->next;
        delete temp;
        cnt--;
    }

    int peek() {
        if (isEmpty()) return -1;
        return topNode->data;
    }

    int size() {
        return cnt;
    }
};
int main() {
    return 0;
}