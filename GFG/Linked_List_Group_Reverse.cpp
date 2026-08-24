#include <bits/stdc++.h>
using namespace std;

class Node {
  public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

class Solution {
public:
    Node* reverseKGroup(Node* head, int k) {
        if (head == NULL || k == 1) return head;
        Node *temp = head;
        Node* prev = NULL;
        Node* newHead = NULL;
        while (temp != NULL) {
            Node* groupHead = temp;
            Node* p = NULL;
            int count = 0;
            while (temp != NULL && count < k) {
                Node *nxt = temp->next;
                temp->next = p;
                p = temp;
                temp = nxt;
                count++;
            }
            if (newHead == NULL) newHead = p;
            if (prev != NULL) prev->next = p;
            prev = groupHead;
        }
        return newHead;
    }
};
int main() {
    return 0;
}