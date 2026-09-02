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
    void rearrangeEvenOdd(Node *head) {
        // Your Code here
        if (head == NULL || head->next == NULL) return;
        Node* odd = head;
        Node* even = head->next;
        Node* evenHead = even;
        while (even != NULL && even->next != NULL) {
            odd->next = even->next;
            odd = odd->next;

            even->next = odd->next;
            even = even->next;
        }
        odd->next = evenHead;
    }
};
int main() {
    return 0;
}