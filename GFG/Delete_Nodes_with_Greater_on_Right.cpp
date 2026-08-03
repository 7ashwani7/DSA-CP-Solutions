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

class Solution {
  public:
    Node* reverseList(Node* head) {
        Node* prev = NULL;
        Node* curr = head;

        while (curr) {
            Node* nxt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nxt;
        }
        return prev;
    }
    Node *compute(Node *head) {
        // code here
        if (!head || !head->next) return head;
        head = reverseList(head);
        int mx = head->data;
        Node* curr = head;
        while (curr && curr->next) {
            if (curr->next->data < mx) {
                Node* temp = curr->next;
                curr->next = temp->next;
                delete temp;
            } else {
                curr = curr->next;
                mx = max(mx, curr->data);
            }
        }
        return reverseList(head);
        
    }
};
int main() {
    return 0;
}