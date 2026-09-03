#include <bits/stdc++.h>
using namespace std;

class Node {
public:    
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
class Solution {
public:
    Node* rotate(Node* head, int k) {
        if(head == NULL || head->next == NULL)
            return head;
        int n = 1;
        Node* tail = head;
        while(tail->next != NULL) {
            tail = tail->next;
            n++;
        }

        k = k % n;
        if(k == 0) return head;

        Node* temp = head;
        for(int i = 1; i < k; i++) {
            temp = temp->next;
        }
        Node* newHead = temp->next;
        temp->next = NULL;
        tail->next = head;

        return newHead;
    }
};
int main() {
    return 0;
}