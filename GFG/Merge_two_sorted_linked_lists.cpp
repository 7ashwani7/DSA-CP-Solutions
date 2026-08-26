#include <bits/stdc++.h>
using namespace std;

class Node {
 public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
class Solution {
  public:
    Node* sortedMerge(Node* head1, Node* head2) {
        // code here
        Node* dummy = new Node(0);
        Node* tail = dummy;
        while (head1 && head2) {
            if (head1->data <= head2->data) {
                tail->next = head1;
                head1 = head1->next;
            } 
            else {
                tail->next = head2;
                head2 = head2->next;
            }
            tail = tail->next;
        }
        tail->next = (head1) ? head1 : head2;
        return dummy->next;
    }
};
// OR
class Solution {
  public:
    Node* sortedMerge(Node* head1, Node* head2) {
        // code here
        if (head1 == NULL) return head2;
        if (head2 == NULL) return head1;
        Node* head = NULL;
        Node* tail = NULL;
        if (head1->data <= head2->data) {
            head = tail = head1;
            head1 = head1->next;
        } 
        else {
            head = tail = head2;
            head2 = head2->next;
        }
        while (head1 && head2) {
            if (head1->data <= head2->data) {
                tail->next = head1;
                head1 = head1->next;
            } 
            else {
                tail->next = head2;
                head2 = head2->next;
            }
            tail = tail->next;
        }
        tail->next = (head1) ? head1 : head2;
        return head;
    }
};
int main() {
    return 0;
}