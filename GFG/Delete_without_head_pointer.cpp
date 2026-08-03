#include <bits/stdc++.h>
class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
class Solution {
  public:
    void deleteNode(Node* del_node) {
        // code here
        del_node->data = del_node->next->data;
        del_node->next = del_node->next->next;
    }
};
int main() {
    return 0;
}