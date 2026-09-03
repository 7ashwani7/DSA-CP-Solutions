#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

class Solution {
public:
    Node* reverseList(Node* head) {
        Node *prev = NULL, *curr = head, *Next = head;
        while (curr) {
            Next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = Next;
        }
        return prev;
    }
    void reorderList(Node* head) {
        if (!head || !head->next) return;
        Node* slow = head;
        Node* fast = head;
        while (fast->next != NULL && fast->next->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }
        Node* b = reverseList(slow->next);
        Node* a = head;
        slow->next = NULL;

        Node* c = new Node(100);
        Node* tempc = c;
        Node* tempa = a;
        Node* tempb = b;

        while (tempa && tempb) {
            tempc->next = tempa;
            tempa = tempa->next;
            tempc = tempc->next;

            tempc->next = tempb;
            tempb = tempb->next;
            tempc = tempc->next;
        }

        tempc->next = tempa;
        head = c->next;
    }
};
int main() {
    return 0;
}