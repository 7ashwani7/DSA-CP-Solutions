#include <bits/stdc++.h>
using namespace std;
class Node {
public:
    int data;
    Node* next;
    Node* bottom;

    Node(int x) {
        data = x;
        next = nullptr;
        bottom = nullptr;
    }
};

class Solution {
public:
    Node* merge(Node* a, Node* b) {
        Node* dummy = new Node(0);
        Node* tail = dummy;
        while (a != nullptr && b != nullptr) {
            if (a->data <= b->data) {
                tail->bottom = a;
                a = a->bottom;
            }
            else {
                tail->bottom = b;
                b = b->bottom;
            }
            tail = tail->bottom;
            tail->next = nullptr;
        }
        if (a != nullptr) tail->bottom = a;
        else  tail->bottom = b;
        return dummy->bottom;
    }
    Node* flatten(Node* root) {
        if (root == nullptr) return nullptr;
        Node* result = root;
        Node* curr = root->next;
        while (curr != nullptr) {
            Node* nextHead = curr->next; 
            result = merge(result, curr);
            curr = nextHead;
        }
        return result;
    }
};
int main() {
    return 0;
}