#include <bits/stdc++.h>
using namespace std;
class Node {
  public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

class Solution {
  public:
    Node *insertInMiddle(Node *head, int x) {
        // code Here
        Node* newNode = new Node(x);
        if (head == NULL) return newNode;
        Node* slow = head;
        Node* fast = head;
        while (fast->next && fast->next->next) {
            slow = slow->next;
            fast = fast->next->next;
        }
        newNode->next = slow->next;
        slow->next = newNode;
        return head;
    }
};
int main() {
    return 0;
}